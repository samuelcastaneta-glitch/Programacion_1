// Materia: Programación I, Paralelo 4
// Autor: Samuel Andres Castañeta Argollo
// Fecha creación: 14/10/2025
// Número de ejercicio: 5

#include <iostream>
using namespace std;

void leerMatriz(int m[50][50], int f, int c, char nombre) {
    cout << "Ingrese elementos de matriz " << nombre << ":\n";
    for (int i = 0; i < f; i++)
        for (int j = 0; j < c; j++)
            cin >> m[i][j];
}

void multiplicar(int A[50][50], int B[50][50], int C[50][50], int N, int M) {
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++) {
            C[i][j] = 0;
            for (int k = 0; k < M; k++)
                C[i][j] += A[i][k] * B[k][j];
        }
}

void mostrar(int m[50][50], int f, int c) {
    for (int i = 0; i < f; i++) {
        for (int j = 0; j < c; j++)
            cout << m[i][j] << "\t";
        cout << endl;
    }
}

int main() {
    int N, M, A[50][50], B[50][50], C[50][50];
    cout << "Ingrese N (filas de A): "; cin >> N;
    cout << "Ingrese M (columnas de A / filas de B): "; cin >> M;

    leerMatriz(A, N, M, 'A');
    leerMatriz(B, M, N, 'B');

    multiplicar(A, B, C, N, M);

    cout << "Resultado de A x B:\n";
    mostrar(C, N, N);
}
