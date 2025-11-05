// Materia: Programación I, Paralelo 4
// Autor: Samuel Andres Castañeta Argollo
// Fecha creación: 14/10/2025
// Número de ejercicio: 3
#include <iostream>
using namespace std;
const int FILAS = 3;
const int COLUMNAS = 4;
void mostrarMatriz(char m[FILAS][COLUMNAS]) {
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++)
            cout << m[i][j] << " ";
        cout << endl;
    }
}

int filasSeguras(char m[FILAS][COLUMNAS]) {
    int cont = 0;
    for (int i = 0; i < FILAS; i++) {
        bool segura = true;
        for (int j = 0; j < COLUMNAS; j++)
            if (m[i][j] == 'x') segura = false;
        if (segura) cont++;
    }
    return cont;
}

int columnasSeguras(char m[FILAS][COLUMNAS]) {
    int cont = 0;
    for (int j = 0; j < COLUMNAS; j++) {
        bool segura = true;
        for (int i = 0; i < FILAS; i++)
            if (m[i][j] == 'x') segura = false;
        if (segura) cont++;
    }
    return cont;
}

int muertosVivos(char m[FILAS][COLUMNAS], int fila[], int col[]) {
    int k = 0;
    for (int i = 0; i < FILAS; i++)
        for (int j = 0; j < COLUMNAS; j++)
            if (m[i][j] == 'x') {
                fila[k] = i;
                col[k] = j;
                k++;
            }
    return k;
}

int main() {
    char matriz[FILAS][COLUMNAS] = {
        {'x','o','x','o'},
        {'o','o','o','o'},
        {'o','o','x','o'}
    };

    int filas[20], columnas[20];
    cout << "Mapa del complejo:\n";
    mostrarMatriz(matriz);

    cout << "Filas seguras: " << filasSeguras(matriz) << endl;
    cout << "Columnas seguras: " << columnasSeguras(matriz) << endl;

    int cantidad = muertosVivos(matriz, filas, columnas);
    cout << "Muertos vivientes encontrados: " << cantidad << endl;
    for (int i = 0; i < cantidad; i++)
        cout << "Posicion: [" << filas[i]+1 << "][" << columnas[i]+1 << "]\n";

    int contCol1 = 0;
    for (int i = 0; i < FILAS; i++)
        if (matriz[i][0] == 'x') contCol1++;

    if (contCol1 >= 2)
        cout << "No es posible entrar al complejo\n";
    else
        cout << "Es posible entrar al complejo\n";
}
