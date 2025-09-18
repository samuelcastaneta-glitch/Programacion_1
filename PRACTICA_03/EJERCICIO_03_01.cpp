// Materia: Programación I, Paralelo 4
// Autor: Samuel Andrés Castañeta Argollo
// Fecha creación: 05/09/2025
// Número de ejercicio: 1
//que sea bien resivido el espiritu maquina 
#include <bits/stdc++.h>
using namespace std;

bool esPar(int numero) {
    return numero % 2 == 0;
}

int main() {
    int num;
    cout << "Ingrese un numero: ";
    cin >> num;

    if (esPar(num))
        cout << "El numero es par\n";
    else
        cout << "El numero es impar\n";

    return 0;
}