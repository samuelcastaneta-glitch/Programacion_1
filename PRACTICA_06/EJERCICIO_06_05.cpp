// Materia: Programación I, Paralelo 1
// Autor: Samuel Andres Castañeta Argollo
// Fecha creación: 29/10/2024
// Número de ejercicio: 5
#include <iostream>
#include <string>
using namespace std;

int main() {
    string A[10], B[10];
    int n1, n2;

    cout << "Cuantos clientes en empresa A: ";
    cin >> n1;
    cin.ignore();
    for (int i = 0; i < n1; i++) getline(cin, A[i]);

    cout << "Cuantos clientes en empresa B: ";
    cin >> n2;
    cin.ignore();
    for (int i = 0; i < n2; i++) getline(cin, B[i]);

    cout << "Clientes repetidos:\n";
    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < n2; j++) {
            if (A[i] == B[j]) cout << A[i] << endl;
        }
    }
    return 0;
}
