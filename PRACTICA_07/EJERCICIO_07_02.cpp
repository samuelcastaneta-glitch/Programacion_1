// Materia: Programación I, Paralelo 4
// Autor: Samuel Andres Castañeta Argollo
// Fecha creación: 14/10/2025
// Número de ejercicio: 2
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;
void llenarMatriz(int m[50][50], int n, int a, int b) {
    srand(time(0));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            m[i][j] = a + rand() % (b - a + 1);
}
void mostrarMatriz(int m[50][50], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            cout << m[i][j] << "\t";
        cout << endl;
    }
}
int sumaUltimaColumna(int m[50][50], int n) {
    int suma = 0;
    for (int i = 0; i < n; i++)
        suma += m[i][n-1];
    return suma;
}
int productoUltimaFila(int m[50][50], int n) {
    int prod = 1;
    for (int j = 0; j < n; j++)
        prod *= m[n-1][j];
    return prod;
}
void mayorYposicion(int m[50][50], int n) {
    int mayor = m[0][0], fila = 0, col = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if (m[i][j] > mayor) {
                mayor = m[i][j];
                fila = i;
                col = j;
            }
    cout << "Mayor valor: " << mayor << " en posición [" << fila+1 << "][" << col+1 << "]\n";
}
void desviacionEstandar(int m[50][50], int n) {
    float suma = 0, media, desv = 0;
    int total = n * n;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            suma += m[i][j];
    media = suma / total;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            desv += pow(m[i][j] - media, 2);
    cout << "Desviacion estandar: " << sqrt(desv / total) << endl;
}
int main() {
    int n, a, b, m[50][50];
    cout << "Ingrese tamaño de la matriz: "; cin >> n;
    cout << "Rango A: "; cin >> a;
    cout << "Rango B: "; cin >> b;
    llenarMatriz(m, n, a, b);
    mostrarMatriz(m, n);
    cout << "Suma ultima columna: " << sumaUltimaColumna(m, n) << endl;
    cout << "Producto ultima fila: " << productoUltimaFila(m, n) << endl;
    mayorYposicion(m, n);
    desviacionEstandar(m, n);
}
