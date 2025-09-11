// Materia: Programación I, Paralelo 4
// Autor: Samuel Andres Castañeta Argollo
// Carnet: 8441386 L.P.
// Carrera del estudiante: Ingeniería Mecatronica
// Fecha creación: 10/09/2025
// Número de ejercicio: 5
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, num, suma=0, mayor=0, menor=1001;
    srand(time(0));
    cout << "Ingrese N: ";
    cin >> n;
    for (int i=0; i<n; i++) {
        num = 1 + rand()%1000;
        suma += num;
        if (num>mayor) mayor=num;
        if (num<menor) menor=num;
    }
    cout << "Sumatoria: " << suma << endl;
    cout << "Promedio: " << (suma*1.0/n) << endl;
    cout << "Mayor: " << mayor << endl;
    cout << "Menor: " << menor << endl;
    return 0;
}