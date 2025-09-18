// Materia: Programación I, Paralelo 4
// Autor: Samuel Andrés Castañeta Argollo
// Fecha creación: 05/09/2025
// Número de ejercicio: 5

#include <bits/stdc++.h>
using namespace std;

double promedioPonderado() {
    int pesos[4] = {10,20,30,40};
    int notas[4];
    int sumaPesos = 0;
    double suma = 0;

    srand(time(0));
    for (int i = 0; i < 4; i++) {
        notas[i] = rand() % 100 + 1;
        cout << "Nota " << i+1 << ": " << notas[i] << " con peso " << pesos[i] << endl;
        suma += notas[i] * pesos[i];
        sumaPesos += pesos[i];
    }

    return suma / sumaPesos;
}

int main() {
    cout << "Promedio ponderado: " << promedioPonderado() << endl;
    return 0;
}
