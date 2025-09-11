// Materia: Programación I, Paralelo 4
// Autor: Samuel Andres Castañeta Argollo
// Carnet: 8441386 L.P.
// Carrera del estudiante: Ingeniería Mecatronica
// Fecha creación: 10/09/2025
// Número de ejercicio: 7
#include <bits/stdc++.h>
using namespace std;
int main() {
    int N, n1, n2, n3, total;
    srand(time(0));
    cout << "Ingrese cantidad total de ninos: ";
    cin >> N;
    n1 = rand()%(N+1);
    n2 = rand()%(N-n1+1);
    n3 = N - n1 - n2;
    total = (n1*6) + (n2*3) + (n3*2);
    cout << "Ninos de 1 anio: " << n1 << endl;
    cout << "Ninos de 2 anios: " << n2 << endl;
    cout << "Ninos de 3 anios: " << n3 << endl;
    cout << "Consumo total de panales: " << total << endl;
    return 0;
}
