// Materia: Programación I, Paralelo 4
// Autor: Samuel Andrés Castañeta Argollo
// Fecha creación: 05/09/2025
// Número de ejercicio: 8

#include <bits/stdc++.h>
using namespace std;

void descomponerDinero(int monto) {
    int billetes[] = {200,100,50,20,10,5,2,1};
    for (int i = 0; i < 8; i++) {
        int cantidad = monto / billetes[i];
        monto %= billetes[i];
        if (cantidad > 0)
            cout << cantidad << " de " << billetes[i] << " Bs\n";
    }
}

int main() {
    int monto;
    cout << "Ingrese monto en Bs: ";
    cin >> monto;
    descomponerDinero(monto);
    return 0;
}
