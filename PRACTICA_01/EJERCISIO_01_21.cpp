// Materia: Programación I, Paralelo 4
// Autor: Willy Edwin Tenorio Palza
// Carnet: 8441386 L.P.
// Ing Mecatronica
// Fecha creación: 25/08/2025
// Número de ejercicio: 21
//  Entendio el chiste podia aserlo como enclases pero eso es aburrido mejor lo que te de un poco de locura
//  Que el omnisalla vendiga este espiritu mauina
#include <bits/stdc++.h>
using namespace std;
long long multiplicarPorSumas(long long a, long long b) {
 
    bool negativo = (a < 0) ^ (b < 0);// YO SOY TU PADRE
    long long x = (a < 0) ? -a : a;
    long long y = (b < 0) ? -b : b;
   
    if (x < y) swap(x, y);
    long long res = 0;
    for (long long i = 0; i < y; ++i) res += x;
    return negativo ? -res : res;
}

int main() {
    long long a, b; 
    cout << "Ingrese a y b: "; cin >> a >> b;
    cout << "Producto = " << multiplicarPorSumas(a, b) << "\n";
    return 0;
}