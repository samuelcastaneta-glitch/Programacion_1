#include <iostream>
#include <vector>
#include <cstring>
#include <fstream> 
using namespace std;

struct Auto {
    char marca[30];
    char modelo[30];
    char tipo[30];
    char color[20];
    char referencia[30];
    int anio;
    float precio;
};

Auto ingresarAuto() {
    Auto a;
    cout << "\n--- Ingreso de datos del auto ---\n";
    cout << "Marca: ";
    cin.getline(a.marca, 30);
    cout << "Modelo: ";
    cin.getline(a.modelo, 30);
    cout << "Tipo: ";
    cin.getline(a.tipo, 30);
    cout << "Color: ";
    cin.getline(a.color, 20);
    cout << "Transmision: ";
    cin.getline(a.referencia, 30);
    cout << "Anio: ";
    cin >> a.anio;
    cout << "Precio: ";
    cin >> a.precio;
    cin.ignore();
    return a;
}

void mostrarAutos(const vector<Auto>& autos) {
    cout << "\n--- Lista de autos ingresados ---\n";
    if (autos.empty()) {
        cout << "No hay autos registrados.\n";
    } else {
        for (size_t i = 0; i < autos.size(); ++i) {
            cout << "\nAuto #" << i + 1 << ":\n";
            cout << "Marca: " << autos[i].marca << endl;
            cout << "Modelo: " << autos[i].modelo << endl;
            cout << "Tipo: " << autos[i].tipo << endl;
            cout << "Color: " << autos[i].color << endl;
            cout << "Transmision: " << autos[i].referencia << endl;
            cout << "Anio: " << autos[i].anio << endl;
            cout << "Precio: $" << autos[i].precio << endl;
        }
    }
}


void guardarAutosEnArchivo(const vector<Auto>& autos) {
    ofstream archivo("autos.txt", ios::out); 

    if (!archivo) {
        cout << "Error al abrir el archivo para escritura.\n";
        return;
    }

    archivo << "--- Registro de autos ---\n";
    for (size_t i = 0; i < autos.size(); ++i) {
        archivo << "\nAuto #" << i + 1 << ":\n";
        archivo << "Marca: " << autos[i].marca << endl;
        archivo << "Modelo: " << autos[i].modelo << endl;
        archivo << "Tipo: " << autos[i].tipo << endl;
        archivo << "Color: " << autos[i].color << endl;
        archivo << "Transmision: " << autos[i].referencia << endl;
        archivo << "Anio: " << autos[i].anio << endl;
        archivo << "Precio: $" << autos[i].precio << endl;
    }

    archivo.close();
    cout << "\nDatos guardados correctamente en 'autos.txt'.\n";
}

int main() {
    vector<Auto> autos;
    int opcion;
    do {
        cout << "\n=== MENU PRINCIPAL ===\n";
        cout << "1. Ingresar auto\n";
        cout << "2. Mostrar autos\n";
        cout << "3. Guardar en archivo\n";
        cout << "4. Salir\n";
        cout << "Seleccione una opcion: ";
        cin >> opcion;
        cin.ignore();

        switch (opcion) {
            case 1: {
                Auto nuevo = ingresarAuto();
                autos.push_back(nuevo);
                cout << "Auto ingresado correctamente.\n";
                break;
            }
            case 2:
                mostrarAutos(autos);
                break;
            case 3:
                guardarAutosEnArchivo(autos);
                break;
            case 4:
                cout << "Saliendo del programa...\n";
                break;
            default:
                cout << "Opcion invalida. Intente de nuevo.\n";
        }
    } while (opcion != 4);

    return 0;
}
