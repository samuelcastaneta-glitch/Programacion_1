// Materia: Programación I, Paralelo 4
// Autor: Willy Edwin Tenorio Palza
// Carnet: 8441386 L.P.
// Ing Mecatronica
// Fecha creación: 25/08/2025
// Número de ejercicio: 14
// No compila  o creo que algo malo va a pasar
// Un clasico que al espiritu mauina esper le guste
#include <bits/stdc++.h>
using namespace std;
int main() {
    int N; 
    cout << "Altura N: "; cin >> N;
    for (int i = 1; i <= N; ++i) {
        for (int j = 1; j <= i; ++j) 
            cout << '*';
        cout << '\n';
    }
    return 0;
}