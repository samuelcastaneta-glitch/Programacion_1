// Materia: Programación I, Paralelo 4
// Autor: Samuel Andres Castañeta Argollo
// Carnet: 8441386 L.P.
// Carrera del estudiante: Ingeniería Mecatronica
// Fecha creación: 10/09/2025
// Número de ejercicio: 3
#include <bits/stdc++.h>
using namespace std;
int main() {
    int num, fact=1;
    srand(time(0));
    num = 1 + rand()%10;
    for (int i=1; i<=num; i++) fact*=i;
    cout << "Numero: " << num << endl;
    cout << "Factorial: " << fact << endl;
    return 0;
}