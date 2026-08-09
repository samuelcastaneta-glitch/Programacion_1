#que el homnissia nos bendiga y apoye al tecnobiologis en su labor
import os
import csv
import shutil
import sqlite3
import tkinter as tk

from tkinter import ttk, messagebox, filedialog



CARPETA_PRINCIPAL = r"G:\Mi unidad\01_apuntes"

CARPETA_ESTUDIOS = os.path.join(
    CARPETA_PRINCIPAL,
    "estudios_EEG"
)

BASE_DATOS = os.path.join(
    CARPETA_PRINCIPAL,
    "eeg_database.db"
)



def preparar_sistema():

    os.makedirs(CARPETA_PRINCIPAL, exist_ok=True)
    os.makedirs(CARPETA_ESTUDIOS, exist_ok=True)

    conexion = sqlite3.connect(BASE_DATOS)
    cursor = conexion.cursor()

    cursor.execute("""
        CREATE TABLE IF NOT EXISTS pacientes (
            id INTEGER PRIMARY KEY AUTOINCREMENT,
            nombre TEXT NOT NULL,
            apellido TEXT NOT NULL,
            documento TEXT UNIQUE,
            fecha_nacimiento TEXT,
            sexo TEXT,
            observaciones TEXT,
            fecha_registro TEXT
        )
    """)

    cursor.execute("""
        CREATE TABLE IF NOT EXISTS estudios_eeg (
            id INTEGER PRIMARY KEY AUTOINCREMENT,
            paciente_id INTEGER NOT NULL,
            codigo_estudio TEXT UNIQUE NOT NULL,
            fecha_estudio TEXT NOT NULL,
            dispositivo TEXT,
            modelo TEXT,
            canales INTEGER,
            frecuencia_muestreo REAL,
            duracion_segundos REAL,
            archivo_csv TEXT,
            observaciones TEXT,

            FOREIGN KEY (paciente_id)
            REFERENCES pacientes(id)
        )
    """)

    conexion.commit()
    conexion.close()



def registrar_paciente():

    ventana = tk.Toplevel(root)
    ventana.title("Registrar paciente")
    ventana.geometry("450x500")
    ventana.resizable(False, False)

    campos = [
        "Nombre",
        "Apellido",
        "Documento / CI",
        "Fecha de nacimiento",
        "Sexo",
        "Observaciones"
    ]

    entradas = {}

    for i, campo in enumerate(campos):

        tk.Label(
            ventana,
            text=campo + ":"
        ).pack(pady=(10, 0))

        entrada = tk.Entry(
            ventana,
            width=45
        )

        entrada.pack()

        entradas[campo] = entrada

    def guardar():

        nombre = entradas["Nombre"].get().strip()
        apellido = entradas["Apellido"].get().strip()
        documento = entradas["Documento / CI"].get().strip()
        nacimiento = entradas["Fecha de nacimiento"].get().strip()
        sexo = entradas["Sexo"].get().strip()
        observaciones = entradas["Observaciones"].get().strip()

        if nombre == "" or apellido == "":

            messagebox.showwarning(
                "Datos incompletos",
                "Nombre y apellido son obligatorios."
            )

            return

        conexion = sqlite3.connect(BASE_DATOS)
        cursor = conexion.cursor()

        try:

            from datetime import datetime

            cursor.execute("""
                INSERT INTO pacientes
                (
                    nombre,
                    apellido,
                    documento,
                    fecha_nacimiento,
                    sexo,
                    observaciones,
                    fecha_registro
                )
                VALUES (?, ?, ?, ?, ?, ?, ?)
            """, (
                nombre,
                apellido,
                documento,
                nacimiento,
                sexo,
                observaciones,
                datetime.now().strftime(
                    "%Y-%m-%d %H:%M:%S"
                )
            ))

            conexion.commit()

            messagebox.showinfo(
                "Paciente registrado",
                "Paciente registrado correctamente."
            )

            ventana.destroy()

        except sqlite3.IntegrityError:

            messagebox.showerror(
                "Error",
                "El documento ya está registrado."
            )

        finally:

            conexion.close()

    tk.Button(
        ventana,
        text="GUARDAR PACIENTE",
        command=guardar,
        width=25,
        height=2
    ).pack(pady=25)



def consultar_pacientes():

    ventana = tk.Toplevel(root)
    ventana.title("Pacientes registrados")
    ventana.geometry("850x500")

    columnas = (
        "ID",
        "Nombre",
        "Apellido",
        "Documento",
        "Nacimiento",
        "Sexo"
    )

    tabla = ttk.Treeview(
        ventana,
        columns=columnas,
        show="headings"
    )

    for columna in columnas:

        tabla.heading(
            columna,
            text=columna
        )

        tabla.column(
            columna,
            width=120
        )

    tabla.pack(
        fill=tk.BOTH,
        expand=True,
        padx=10,
        pady=10
    )

    conexion = sqlite3.connect(BASE_DATOS)
    cursor = conexion.cursor()

    cursor.execute("""
        SELECT
            id,
            nombre,
            apellido,
            documento,
            fecha_nacimiento,
            sexo
        FROM pacientes
        ORDER BY id DESC
    """)

    pacientes = cursor.fetchall()

    conexion.close()

    for paciente in pacientes:

        tabla.insert(
            "",
            tk.END,
            values=paciente
        )



def buscar_paciente():

    ventana = tk.Toplevel(root)

    ventana.title("Buscar paciente")
    ventana.geometry("850x500")

    tk.Label(
        ventana,
        text="Nombre, apellido o CI:"
    ).pack(pady=10)

    entrada = tk.Entry(
        ventana,
        width=50
    )

    entrada.pack()

    columnas = (
        "ID",
        "Nombre",
        "Apellido",
        "Documento",
        "Nacimiento",
        "Sexo"
    )

    tabla = ttk.Treeview(
        ventana,
        columns=columnas,
        show="headings"
    )

    for columna in columnas:

        tabla.heading(
            columna,
            text=columna
        )

        tabla.column(
            columna,
            width=120
        )
# por constumbre dejo resos al homnissia o dios maquina de warhammer40k
    tabla.pack(
        fill=tk.BOTH,
        expand=True,
        padx=10,
        pady=10
    )

    def buscar():

        for item in tabla.get_children():

            tabla.delete(item)

        texto = entrada.get().strip()

        conexion = sqlite3.connect(BASE_DATOS)
        cursor = conexion.cursor()

        cursor.execute("""
            SELECT
                id,
                nombre,
                apellido,
                documento,
                fecha_nacimiento,
                sexo
            FROM pacientes
            WHERE
                nombre LIKE ?
                OR apellido LIKE ?
                OR documento LIKE ?
        """, (
            "%" + texto + "%",
            "%" + texto + "%",
            "%" + texto + "%"
        ))

        resultados = cursor.fetchall()

        conexion.close()

        for paciente in resultados:

            tabla.insert(
                "",
                tk.END,
                values=paciente
            )

    tk.Button(
        ventana,
        text="BUSCAR",
        command=buscar,
        width=20
    ).pack(pady=5)



def importar_openbci():

    conexion = sqlite3.connect(BASE_DATOS)
    cursor = conexion.cursor()

    cursor.execute("""
        SELECT
            id,
            nombre,
            apellido,
            documento
        FROM pacientes
        ORDER BY nombre
    """)

    pacientes = cursor.fetchall()

    conexion.close()

    if not pacientes:

        messagebox.showwarning(
            "Sin pacientes",
            "Primero debe registrar un paciente."
        )

        return

    ventana = tk.Toplevel(root)

    ventana.title("Importar EEG OpenBCI")
    ventana.geometry("550x350")
    ventana.resizable(False, False)

    tk.Label(
        ventana,
        text="Paciente:"
    ).pack(pady=(20, 5))

    opciones = []

    for paciente in pacientes:

        opciones.append(
            f"{paciente[0]} - "
            f"{paciente[1]} {paciente[2]} - "
            f"{paciente[3]}"
        )

    combo = ttk.Combobox(
        ventana,
        values=opciones,
        width=55,
        state="readonly"
    )

    combo.pack()

    combo.current(0)

    tk.Label(
        ventana,
        text="Archivo CSV de OpenBCI:"
    ).pack(pady=(20, 5))

    ruta_var = tk.StringVar()

    tk.Entry(
        ventana,
        textvariable=ruta_var,
        width=55
    ).pack()

    def seleccionar_archivo():

        archivo = filedialog.askopenfilename(
            title="Seleccionar archivo EEG",
            filetypes=[
                (
                    "Archivos CSV",
                    "*.csv"
                ),
                (
                    "Archivos de texto",
                    "*.txt"
                ),
                (
                    "Todos los archivos",
                    "*.*"
                )
            ]
        )

        if archivo:

            ruta_var.set(archivo)

    tk.Button(
        ventana,
        text="SELECCIONAR ARCHIVO",
        command=seleccionar_archivo
    ).pack(pady=10)

    tk.Label(
        ventana,
        text="Canales:"
    ).pack()

    canales_var = tk.StringVar(
        value="8"
    )

    tk.Entry(
        ventana,
        textvariable=canales_var,
        width=10
    ).pack()

    tk.Label(
        ventana,
        text="Frecuencia de muestreo (Hz):"
    ).pack()

    frecuencia_var = tk.StringVar(
        value="250"
    )

    tk.Entry(
        ventana,
        textvariable=frecuencia_var,
        width=10
    ).pack()

    def importar():

        archivo = ruta_var.get()

        if not os.path.isfile(archivo):

            messagebox.showerror(
                "Error",
                "Seleccione un archivo válido."
            )

            return

        try:

            paciente_id = int(
                combo.get().split(" - ")[0]
            )

            canales = int(
                canales_var.get()
            )

            frecuencia = float(
                frecuencia_var.get()
            )

        except ValueError:

            messagebox.showerror(
                "Error",
                "Los datos introducidos no son válidos."
            )

            return

        from datetime import datetime

        ahora = datetime.now()

        codigo = (
            "EEG_" +
            ahora.strftime(
                "%Y%m%d_%H%M%S"
            )
        )

        carpeta = os.path.join(
            CARPETA_ESTUDIOS,
            codigo
        )

        os.makedirs(
            carpeta,
            exist_ok=True
        )

        destino = os.path.join(
            carpeta,
            "eeg_data.csv"
        )

        try:

            shutil.copy2(
                archivo,
                destino
            )

            muestras = 0

            with open(
                archivo,
                "r",
                encoding="utf-8",
                errors="ignore"
            ) as archivo_eeg:

                lector = csv.reader(
                    archivo_eeg
                )

                next(
                    lector,
                    None
                )

                for fila in lector:

                    if fila:

                        muestras += 1

            duracion = (
                muestras / frecuencia
            )

            conexion = sqlite3.connect(
                BASE_DATOS
            )

            cursor = conexion.cursor()

            cursor.execute("""
                INSERT INTO estudios_eeg
                (
                    paciente_id,
                    codigo_estudio,
                    fecha_estudio,
                    dispositivo,
                    modelo,
                    canales,
                    frecuencia_muestreo,
                    duracion_segundos,
                    archivo_csv,
                    observaciones
                )
                VALUES (?, ?, ?, ?, ?, ?, ?, ?, ?, ?)
            """, (
                paciente_id,
                codigo,
                ahora.strftime(
                    "%Y-%m-%d %H:%M:%S"
                ),
                "OpenBCI",
                "Cyton",
                canales,
                frecuencia,
                duracion,
                destino,
                "Archivo importado desde OpenBCI"
            ))

            conexion.commit()
            conexion.close()

            messagebox.showinfo(
                "EEG importado",
                "El EEG fue guardado correctamente.\n\n"
                f"Código: {codigo}\n"
                f"Muestras: {muestras}\n"
                f"Duración: {duracion:.2f} segundos"
            )

            ventana.destroy()

        except Exception as error:

            messagebox.showerror(
                "Error",
                str(error)
            )

    tk.Button(
        ventana,
        text="IMPORTAR EEG",
        command=importar,
        width=25,
        height=2
    ).pack(pady=15)



def consultar_estudios():

    ventana = tk.Toplevel(root)

    ventana.title("Estudios EEG")
    ventana.geometry("1100x550")

    columnas = (
        "ID",
        "Código",
        "Paciente",
        "Fecha",
        "Dispositivo",
        "Modelo",
        "Canales",
        "Hz",
        "Duración"
    )

    tabla = ttk.Treeview(
        ventana,
        columns=columnas,
        show="headings"
    )

    for columna in columnas:

        tabla.heading(
            columna,
            text=columna
        )

        tabla.column(
            columna,
            width=115
        )

    tabla.pack(
        fill=tk.BOTH,
        expand=True,
        padx=10,
        pady=10
    )

    conexion = sqlite3.connect(
        BASE_DATOS
    )

    cursor = conexion.cursor()

    cursor.execute("""
        SELECT
            e.id,
            e.codigo_estudio,
            p.nombre || ' ' || p.apellido,
            e.fecha_estudio,
            e.dispositivo,
            e.modelo,
            e.canales,
            e.frecuencia_muestreo,
            e.duracion_segundos
        FROM estudios_eeg e

        INNER JOIN pacientes p
        ON e.paciente_id = p.id

        ORDER BY e.id DESC
    """)

    estudios = cursor.fetchall()

    conexion.close()

    for estudio in estudios:

        tabla.insert(
            "",
            tk.END,
            values=estudio
        )



def consultar_eeg():

    ventana = tk.Toplevel(root)

    ventana.title("Consultar EEG")
    ventana.geometry("750x500")

    tk.Label(
        ventana,
        text="Código del estudio:"
    ).pack(pady=10)

    entrada = tk.Entry(
        ventana,
        width=40
    )

    entrada.pack()

    resultado = tk.Text(
        ventana,
        width=80,
        height=20
    )

    resultado.pack(
        padx=10,
        pady=20
    )

    def consultar():

        resultado.delete(
            "1.0",
            tk.END
        )

        codigo = entrada.get().strip()

        conexion = sqlite3.connect(
            BASE_DATOS
        )

        cursor = conexion.cursor()

        cursor.execute("""
            SELECT
                e.codigo_estudio,
                p.nombre,
                p.apellido,
                p.documento,
                e.fecha_estudio,
                e.dispositivo,
                e.modelo,
                e.canales,
                e.frecuencia_muestreo,
                e.duracion_segundos,
                e.archivo_csv,
                e.observaciones
            FROM estudios_eeg e

            INNER JOIN pacientes p
            ON e.paciente_id = p.id

            WHERE e.codigo_estudio = ?
        """, (codigo,))

        estudio = cursor.fetchone()

        conexion.close()

        if estudio is None:

            resultado.insert(
                tk.END,
                "EEG no encontrado."
            )

            return

        texto = f"""
INFORMACIÓN DEL ESTUDIO EEG
========================================

Código:
{estudio[0]}

PACIENTE
----------------------------------------
Nombre:
{estudio[1]} {estudio[2]}

Documento:
{estudio[3]}

ESTUDIO
----------------------------------------
Fecha:
{estudio[4]}

Dispositivo:
{estudio[5]}

Modelo:
{estudio[6]}

Canales:
{estudio[7]}

Frecuencia:
{estudio[8]} Hz

Duración:
{estudio[9]:.2f} segundos

ARCHIVO EEG
----------------------------------------
{estudio[10]}

OBSERVACIONES
----------------------------------------
{estudio[11]}
"""

        resultado.insert(
            tk.END,
            texto
        )

    tk.Button(
        ventana,
        text="CONSULTAR",
        command=consultar,
        width=20
    ).pack()


def crear_interfaz():

    global root

    root = tk.Tk()

    root.title(
        "Sistema de Gestión EEG - OpenBCI"
    )

    root.geometry(
        "800x600"
    )

    root.resizable(
        False,
        False
    )

    titulo = tk.Label(
        root,
        text="SISTEMA DE GESTIÓN EEG",
        font=(
            "Arial",
            24,
            "bold"
        )
    )

    titulo.pack(
        pady=(30, 5)
    )

    subtitulo = tk.Label(
        root,
        text="Almacenamiento y consulta de estudios OpenBCI",
        font=(
            "Arial",
            11
        )
    )

    subtitulo.pack(
        pady=(0, 30)
    )


    marco = tk.Frame(root)

    marco.pack()

    tk.Button(
        marco,
        text="REGISTRAR PACIENTE",
        command=registrar_paciente,
        width=30,
        height=2
    ).grid(
        row=0,
        column=0,
        padx=10,
        pady=10
    )

    tk.Button(
        marco,
        text="CONSULTAR PACIENTES",
        command=consultar_pacientes,
        width=30,
        height=2
    ).grid(
        row=0,
        column=1,
        padx=10,
        pady=10
    )

    tk.Button(
        marco,
        text="BUSCAR PACIENTE",
        command=buscar_paciente,
        width=30,
        height=2
    ).grid(
        row=1,
        column=0,
        padx=10,
        pady=10
    )

    tk.Button(
        marco,
        text="IMPORTAR EEG OPENBCI",
        command=importar_openbci,
        width=30,
        height=2
    ).grid(
        row=1,
        column=1,
        padx=10,
        pady=10
    )

    tk.Button(
        marco,
        text="CONSULTAR ESTUDIOS EEG",
        command=consultar_estudios,
        width=30,
        height=2
    ).grid(
        row=2,
        column=0,
        padx=10,
        pady=10
    )

    tk.Button(
        marco,
        text="CONSULTAR EEG",
        command=consultar_eeg,
        width=30,
        height=2
    ).grid(
        row=2,
        column=1,
        padx=10,
        pady=10
    )

    tk.Label(
        root,
        text=(
            "Carpeta de almacenamiento:\n"
            + CARPETA_PRINCIPAL
        ),
        font=(
            "Arial",
            9
        )
    ).pack(
        pady=40
    )


    root.mainloop()

if __name__ == "__main__":

    preparar_sistema()

    crear_interfaz()