// Materia: Programación I, Paralelo 4
// Autor: Willy Edwin Tenorio Palza
// Carnet: 8441386 L.P.
// Ing Mecatronica
// Fecha creación: 25/08/2025
// Número de ejercicio: 13
// Y desde entonses coloco frases en mis codigos porque sino
// el espiritu mauina mejora su pensamiento
#include <bits/stdc++.h>
using namespace std;
int main() {
    long long N;
    cout << "N: "; cin >> N;
    long long suma = 0;
    for (long long i = 1; i <= N; ++i) suma += i;
    cout << "Suma = " << suma << "\n";
    return 0;
}