// Materia: Programación I, Paralelo 4
// Autor: Willy Edwin Tenorio Palza
// Carnet: 8441386 L.P.
// Ing Mecatronica
// Fecha creación: 25/08/2025
// Número de ejercicio: 25
// XOR BUENO XORG LE DISE ABUZZ YO SOY TU PADRE
//Nose que mas decir ya se me acabaron los chistes y resos
//  Que el omnisalla vendiga este espiritu mauina
#include <bits/stdc++.h>
using namespace std;
int main() {
    char resp;
    do {
        long long n;
        cout << "Numero: "; cin >> n;
        for (int i = 1; i <= 10; ++i)
            cout << n << " x " << i << " = " << n * i << "\n";
        cout << "¿Desea calcular otra tabla? (s/n): ";
        cin >> resp;
        resp = tolower(static_cast<unsigned char>(resp));
    } while (resp == 's');
    return 0;
}