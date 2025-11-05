// Materia: Programación I, Paralelo 3
// Autor: Samuel Andres Castañeta Argollo
// Fecha creación: 14/10/2025
// Número de ejercicio: 6
#include <iostream>
using namespace std;
void leerMatriz(int m[50][50], int f, int c) {
    for (int i = 0; i < f; i++)
        for (int j = 0; j < c; j++) {
            cout << "Ingrese valor [" << i+1 << "][" << j+1 << "]: ";
            cin >> m[i][j];
        }
}
void trasponer(int m[50][50], int t[50][50], int f, int c) {
    for (int i = 0; i < f; i++)
        for (int j = 0; j < c; j++)
            t[j][i] = m[i][j];
}
void mostrar(int m[50][50], int f, int c) {
    for (int i = 0; i < f; i++) {
        for (int j = 0; j < c; j++)
            cout << m[i][j] << "\t";
        cout << endl;
    }
}
int main() {
    int f, c, m[50][50], t[50][50];
    cout << "Ingrese filas: "; cin >> f;
    cout << "Ingrese columnas: "; cin >> c;
    leerMatriz(m, f, c);
    trasponer(m, t, f, c);
    cout << "Matriz traspuesta:\n";
    mostrar(t, c, f);
}
