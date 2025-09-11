// Materia: Programación I, Paralelo 4
// Autor: Samuel Andres Castañeta Argollo
// Carnet: 8441386 L.P.
// Carrera del estudiante: Ingeniería Mecatronica
// Fecha creación: 10/09/2025
// Número de ejercicio: 2
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, moneda, caras=0, cruces=0;
    srand(time(0));
    cout << "Ingrese la cantidad de lanzamientos: ";
    cin >> n;
    for (int i=0; i<n; i++) {
        moneda = rand()%2; 
        if (moneda==0) caras++;
        else cruces++;
    }
    cout << "Porcentaje de caras: " << (caras*100.0/n) << "%" << endl;
    cout << "Porcentaje de cruces: " << (cruces*100.0/n) << "%" << endl;
    return 0;
}