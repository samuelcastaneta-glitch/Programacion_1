// Materia: Programación I, Paralelo 4
// Autor: Willy Edwin Tenorio Palza
// Carnet: 8441386 L.P.
// Ing Mecatronica
// Fecha creación: 25/08/2025
// Número de ejercicio: 24
// XOR BUENO XORG LE DISE ABUZZ YO SOY TU PADRE
//Y pillo dijo que no le gustan los breakes pero este ejercisio los nesesita
//  Que el omnisalla vendiga este espiritu mauina
#include <bits/stdc++.h>
using namespace std;
int main() {
    int op;
    do {
        cout << "1. Opcion 1\n2. Opcion 2\n3. Opcion 3\n0. Salir\n";
        cout << "Elija opcion: ";
        cin >> op;
        switch (op) {
            case 1: cout << "Selecciono Opcion 1\n"; break;
            case 2: cout << "Selecciono Opcion 2\n"; break;
            case 3: cout << "Selecciono Opcion 3\n"; break;
            case 0: cout << "Saliendo...\n"; break;
            default: cout << "Opcion invalida\n"; break;
        }
        cout << "\n";
    } while (op != 0);
    return 0;
}