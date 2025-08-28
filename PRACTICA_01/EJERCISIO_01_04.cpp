// Materia: Programación I, Paralelo 4
// Autor: Willy Edwin Tenorio Palza
// Carnet: 8441386 L.P.
// Ing Mecatronica
// Fecha creación: 25/08/2025
// Número de ejercicio: 4
// Spirit of machine no se revele hola INGE
#include <bits/stdc++.h>
using namespace std;
int main() {
    const double PI = acos(-1.0); 
    double r;
    cout << "Radio: "; cin >> r;
    double volumen = (4.0/3.0) * PI * pow(r, 3);
    cout << "Volumen de la esfera = " << volumen << "\n";
    return 0;
}