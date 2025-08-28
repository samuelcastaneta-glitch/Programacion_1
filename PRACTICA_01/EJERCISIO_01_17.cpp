// Materia: Programación I, Paralelo 4
// Autor: Willy Edwin Tenorio Palza
// Carnet: 8441386 L.P.
// Ing Mecatronica
// Fecha creación: 25/08/2025
// Número de ejercicio: 17
// Me recuerda cuando comense con los grafos pero 
// La Caren es un eror el metal es eterno omnisalla ayuda este espiritu mauina
#include <bits/stdc++.h>
using namespace std;
long long sumaDivisoresPropios(long long n) {
    if (n <= 1) return 0;
    long long suma = 1; 
    for (long long d = 2; d * d <= n; ++d) {
        if (n % d == 0) {
            suma += d;
            if (d * d != n) suma += n / d;
        }
    }
    return (n == 1) ? 0 : suma;
}

int main() {
    long long a, b;
    cout << "Ingrese dos numeros: ";
    cin >> a >> b;
    long long sa = sumaDivisoresPropios(a);
    long long sb = sumaDivisoresPropios(b);
    if (sa == b && sb == a) cout << "Son numeros amigos\n";
    else cout << "No son amigos\n";
    return 0;
}