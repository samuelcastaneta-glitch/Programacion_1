// Materia: Programación I, Paralelo 1
// Autor: Samuel Andres Castañeta Argollo
// Fecha creación: 29/10/2024
// Número de ejercicio: 8
#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cout << "Ingrese correo: ";
    cin >> s;

    int arrobas = 0;
    bool punto = false;

    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '@') arrobas++;
        if (arrobas == 1 && s[i] == '.') punto = true;
    }

    if (arrobas == 1 && punto)
        cout << "Correo valido\n";
    else
        cout << "Correo invalido\n";

    return 0;
}
