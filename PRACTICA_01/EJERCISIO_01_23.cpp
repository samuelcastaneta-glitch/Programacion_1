// Materia: Programación I, Paralelo 4
// Autor: Willy Edwin Tenorio Palza
// Carnet: 8441386 L.P.
// Ing Mecatronica
// Fecha creación: 25/08/2025
// Número de ejercicio: 23
//  Si no capto le digo lo que use se le suele yamar XOR y en toys tory 2 
//  Que el omnisalla vendiga este espiritu mauina
#include <bits/stdc++.h>
using namespace std;
int main() {
    long long n;
    cout << "Ingrese un entero: "; cin >> n;
    bool negativo = n < 0;
    long long x = negativo ? -n : n;
    long long inv = 0;
    while (x > 0) {
        inv = inv * 10 + (x % 10);
        x /= 10;
    }
    if (n == 0) inv = 0;
    if (negativo) inv = -inv;
    cout << "Invertido: " << inv << "\n";
    return 0;
}