// Materia: Programación I, Paralelo 1
// Autor: Samuel Andres Castañeta Argollo
// Fecha creación: 29/10/2024
// Número de ejercicio: 1

#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int edad=0;
    int v[100];
    int n = 0;
    float suma = 0, media = 0, varianza = 0, desvio = 0;
    cout << "Ingrese edades (terminar con -1): " << endl;
    while (true) {
        cin >> edad;
        if (edad == -1) break;
        v[n] = edad;
        n++;
    }
    for (int i = 0; i < n; i++) suma += v[i];
    media = suma / n;
    for (int i = 0; i < n; i++)
        varianza += (v[i] - media) * (v[i] - media);
    desvio = sqrt(varianza / n);
    cout << "Media: " << media << endl;
    cout << "Desviacion tipica: " << desvio << endl;
    return 0;
}