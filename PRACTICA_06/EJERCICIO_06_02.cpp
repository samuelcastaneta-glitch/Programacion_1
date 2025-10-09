// Materia: Programación I, Paralelo 1
// Autor: Samuel Andres Castañeta Argollo
// Fecha creación: 29/10/2024
// Número de ejercicio: 2

#include <iostream>
using namespace std;

int main() {
    string nombre[6] = {"SN","SB","AU","PT","AG","CU"};
    float prod[6] = {998.000,876.500,786.670,636.143,135.567,109.412};
    string buscar;
    cout << "Ingrese mineral a buscar: ";
    cin >> buscar;

    bool encontrado = false;
    for (int i = 0; i < 6; i++) {
        if (nombre[i] == buscar) {
            cout << "Produccion: " << prod[i] << " tm" << endl;
            encontrado = true;
        }
    }
    if (!encontrado) cout << "No se encontro el mineral." << endl;

    cout << "\n Ordenado de mayor a menor:\n";
    for (int i = 0; i < 6; i++) {
        for (int j = i + 1; j < 6; j++) {
            if (prod[j] > prod[i]) {
                float aux = prod[i]; prod[i] = prod[j]; prod[j] = aux;
                string aux2 = nombre[i]; nombre[i] = nombre[j]; nombre[j] = aux2;
            }
        }
    }

    for (int i = 0; i < 6; i++)
        cout << nombre[i] << " " << prod[i] << endl;

    return 0;
}
