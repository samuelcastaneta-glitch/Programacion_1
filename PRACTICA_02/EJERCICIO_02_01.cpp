// Materia: Programación I, Paralelo 4
// Autor: Samuel Andres Castañeta Argollo
// Carnet: 8441386 L.P.
// Carrera del estudiante: Ingeniería Mecatronica
// Fecha creación: 10/09/2025
// Número de ejercicio: 1
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, dado, cont2=0, cont4=0, cont6=0;
    srand(time(0));
    cout << "Ingrese la cantidad de lanzamientos: ";
    cin >> n;
    for (int i=0; i<n; i++) {
        dado = 1 + rand()%6;
        if (dado==2) cont2++;
        if (dado==4) cont4++;
        if (dado==6) cont6++;
    }
    cout << "Frecuencia 2: " << cont2 << endl;
    cout << "Frecuencia 4: " << cont4 << endl;
    cout << "Frecuencia 6: " << cont6 << endl;
    return 0;
}