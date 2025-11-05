// Materia: Programación I, Paralelo 4
// Autor: Samuel Andres Castañeta Argollo
// Fecha creación: 14/10/2025
// Número de ejercicio: 1
#include <iostream>
using namespace std;
void leerMatriz(int matriz[50][50], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << "Ingrese valor [" << i+1 << "][" << j+1 << "]: ";
            cin >> matriz[i][j];
        }
    }
}
void cambiarFilas(int matriz[50][50], int n) {
    for (int j = 0; j < n; j++) {
        int aux = matriz[0][j];
        matriz[0][j] = matriz[n-1][j];
        matriz[n-1][j] = aux;
    }
}
void mostrarMatriz(int matriz[50][50], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
}
int main() {
    int n, matriz[50][50];
    cout << "Ingrese el tamaño de la matriz: ";
    cin >> n;
    leerMatriz(matriz, n);
    cambiarFilas(matriz, n);
    cout << "Matriz con fila 1 intercambiada con la fila " << n << ":\n";
    mostrarMatriz(matriz, n);
}
