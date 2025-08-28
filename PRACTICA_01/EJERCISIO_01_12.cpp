// Materia: Programación I, Paralelo 4
// Autor: Willy Edwin Tenorio Palza
// Carnet: 8441386 L.P.
// Ing Mecatronica
// Fecha creación: 25/08/2025
// Número de ejercicio: 12
// Por lo que en desesperacion coloque frases al omnisaya   al espiritu maquina
// El espiritu mauina esta con nosotros
#include <bits/stdc++.h>
using namespace std;
int main() {
    float x;
    do {
        cout << "Ingrese un numero (1-5): ";
        cin >> x;
    } while (x < 1 || x > 5); 
    cout << "Valor valido: " << x << "\n";
    return 0;
}