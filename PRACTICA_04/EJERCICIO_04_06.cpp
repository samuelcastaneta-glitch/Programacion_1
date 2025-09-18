// Materia: Programación I, Paralelo 4
// Autor: Samuel Andrés Castañeta Argollo
// Fecha creación: 11/09/2025
// Número de ejercicio: 6

#include <bits/stdc++.h>
using namespace std;

bool esPrimo(int n) {
    if (n <= 1) return false;
    for (int i = 2; i*i <= n; i++)
        if (n % i == 0) return false;
    return true;
}

int sumaDigitosNoCero(int n) {
    int suma = 0;
    while (n > 0) {
        int d = n % 10;
        if (d != 0) suma += d;
        n /= 10;
    }
    return suma;
}

int main() {
    int num;
    cout << "Ingrese un numero: ";
    cin >> num;

    int suma = sumaDigitosNoCero(num);
    cout << "Suma de digitos !=0: " << suma << "\n";
    if (esPrimo(suma))
        cout << "La suma es un numero primo\n";
    else
        cout << "La suma NO es un numero primo\n";
    return 0;
}
