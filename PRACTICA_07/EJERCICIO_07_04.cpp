// Materia: Programación I, Paralelo 4
// Autor: Samuel Andres Castañeta Argollo
// Fecha creación: 14/10/2025
// Número de ejercicio: 4
#include <iostream>
using namespace std;
void generarMatriz(int m[50][50], int n) {
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            m[i][j] = 1 + i*2 + j;
}
void mostrarMatriz(int m[50][50], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            cout << m[i][j] << "\t";
        cout << endl;
    }
}
int main() {
    int n;
    cout << "Ingrese el tamaño n: ";
    cin >> n;
    int matriz[50][50];
    generarMatriz(matriz, n);
    mostrarMatriz(matriz, n);
}
