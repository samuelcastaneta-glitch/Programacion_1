// Materia: Programación I, Paralelo 1
// Autor: Samuel Andres Castañeta Argollo
// Fecha creación: 29/10/2024
// Número de ejercicio: 6
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int n;
    cout << "Numero de estudiantes: ";
    cin >> n;
    int notas[100];
    srand(time(0));
    int r1=0,r2=0,r3=0,r4=0;

    for (int i = 0; i < n; i++) {
        notas[i] = rand() % 101;
        if (notas[i] <= 59) r1++;
        else if (notas[i] <= 79) r2++;
        else if (notas[i] <= 89) r3++;
        else r4++;
    }

    cout << "0-59: " << (r1*100.0/n) << "%\n";
    cout << "60-79: " << (r2*100.0/n) << "%\n";
    cout << "80-89: " << (r3*100.0/n) << "%\n";
    cout << "90-100: " << (r4*100.0/n) << "%\n";
    return 0;
}
