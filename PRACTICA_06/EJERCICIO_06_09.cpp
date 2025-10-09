// Materia: Programación I, Paralelo 1
// Autor: Samuel Andres Castañeta Argollo
// Fecha creación: 29/10/2024
// Número de ejercicio: 9
#include <iostream>
#include <string>
using namespace std;

int main() {
    string oracion;
    cout << "Ingrese oracion: ";
    getline(cin, oracion);

    string palabras[50];
    int n = 0;
    string temp = "";

    for (int i = 0; i < oracion.size(); i++) {
        if (oracion[i] == ' ') {
            palabras[n] = temp;
            n++;
            temp = "";
        } else {
            temp += oracion[i];
        }
    }
    palabras[n] = temp;

    for (int i = n; i >= 0; i--) cout << palabras[i] << " ";
    cout << endl;
    return 0;
}
