// Materia: Programación I, Paralelo 4
// Autor: Willy Edwin Tenorio Palza
// Carnet: 8441386 L.P.
// Ing Mecatronica
// Fecha creación: 25/08/2025
// Número de ejercicio: 16
// Pra la OCE, OCSA, ICPC, IOI 
// El codigo es aprobado por el tecno saserdote?
#include <bits/stdc++.h>
using namespace std;
bool esPrimo(long long n) {
    if (n < 2) return false;
    if (n % 2 == 0) return n == 2;
    for (long long d = 3; d * d <= n; d += 2)
        if (n % d == 0) return false;
    return true;
}
int main() {
    long long n; cout << "Numero: "; 
    cin >> n;
    cout << (esPrimo(n) ? "Primo\n" : "No primo\n");
    return 0;
}