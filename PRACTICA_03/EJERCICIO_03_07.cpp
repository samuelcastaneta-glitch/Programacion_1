// Materia: Programación I, Paralelo 4
// Autor: Samuel Andrés Castañeta Argollo
// Fecha creación: 05/09/2025
// Número de ejercicio: 7

#include <bits/stdc++.h>
using namespace std;

void analizarAlumnos(int n) {
    srand(time(0));
    int mayores = 0, altos = 0, sumaEdad = 0, sumaAltura = 0;

    for (int i = 0; i < n; i++) {
        int edad = rand() % 35 + 1;
        int altura = rand() % 81 + 120;
        cout << "Alumno " << i+1 << ": edad=" << edad << " altura=" << altura << "cm\n";

        sumaEdad += edad;
        sumaAltura += altura;
        if (edad > 18) mayores++;
        if (altura > 175) altos++;
    }

    cout << "Edad media: " << (double)sumaEdad/n << "\n";
    cout << "Altura media: " << (double)sumaAltura/n << "cm\n";
    cout << "Mayores de 18: " << mayores << "\n";
    cout << "Mas de 1.75m: " << altos << "\n";
}

int main() {
    int n;
    cout << "Ingrese cantidad de alumnos: ";
    cin >> n;
    analizarAlumnos(n);
    return 0;
}
