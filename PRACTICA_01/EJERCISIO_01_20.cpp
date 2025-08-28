// Materia: Programación I, Paralelo 4
// Autor: Willy Edwin Tenorio Palza
// Carnet: 8441386 L.P.
// Ing Mecatronica
// Fecha creación: 25/08/2025
// Número de ejercicio: 20
//  yA me quede sin comentarion nose toy cansao
//  Que el omnisalla vendiga este espiritu mauina
#include <bits/stdc++.h>
using namespace std;
int main() {
    long long n; 
    cout << "Ingrese un entero: "; cin >> n;
    if (n == 0) { cout << "Digitos: 1\n"; return 0; }
    long long x = (n < 0) ? -n : n; 
    int dig = 0;
    while (x > 0) { x /= 10; ++dig; }
    cout << "Digitos: " << dig << "\n";
    return 0;
}