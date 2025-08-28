// Materia: Programación I, Paralelo 4
// Autor: Willy Edwin Tenorio Palza
// Carnet: 8441386 L.P.
// Ing Mecatronica
// Fecha creación: 25/08/2025
// Número de ejercicio: 18
// Pero nada supera a map y key eso fue un infierno
//  Desde marte se alsaron hijos del metal
#include <bits/stdc++.h>
using namespace std;
bool primo(long long n){
    if (n < 2) return false;
    if (n % 2 == 0) return n == 2;
    for (long long d = 3; d * d <= n; d += 2)
        if (n % d == 0) return false;
    return true;
}

int main() {
    int cont = 0;
    long long x = 2;
    while (cont < 100) {
        if (primo(x)) { cout << x << (cont==99?'\n':' '); ++cont; }
        ++x;
    }
    return 0;
}