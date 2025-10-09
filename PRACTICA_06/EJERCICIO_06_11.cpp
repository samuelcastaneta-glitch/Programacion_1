// Materia: Programación I, Paralelo 1
// Autor: Samuel Andres Castañeta Argollo
// Fecha creación: 29/10/2024
// Número de ejercicio: 11
#include <iostream>
#include <string>
using namespace std;

int main() {
    string texto;
    char delim;
    cout << "Ingrese texto: ";
    getline(cin, texto);
    cout << "Ingrese delimitador: ";
    cin >> delim;

    string palabra = "";
    for (int i = 0; i < texto.size(); i++) {
        if (texto[i] == delim) {
            cout << palabra << endl;
            palabra = "";
        } else palabra += texto[i];
    }
    cout << palabra << endl;
    return 0;
}
