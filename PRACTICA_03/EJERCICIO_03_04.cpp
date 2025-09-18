// Materia: Programación I, Paralelo 4
// Autor: Samuel Andrés Castañeta Argollo
// Fecha creación: 05/09/2025
// Número de ejercicio: 4

#include <bits/stdc++.h>
using namespace std;

double calcularIMC(double peso, double altura) {
    return peso / (altura * altura);
}

int main() {
    double peso, altura;
    cout << "Ingrese su peso (kg): ";
    cin >> peso;
    cout << "Ingrese su altura (m): ";
    cin >> altura;

    cout << "Su IMC es: " << calcularIMC(peso, altura) << endl;
    return 0;
}
