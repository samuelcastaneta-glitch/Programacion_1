// Materia: Programación I, Paralelo 1
// Autor: Samuel Andres Castañeta Argollo
// Fecha creación: 29/10/2024
// Número de ejercicio: 10
#include <iostream>
#include <string>
using namespace std;

int main() {
    string s, r = "";
    cout << "Ingrese texto: ";
    getline(cin, s);
    for (int i = 0; i < s.size(); i++) {
        if (!(s[i] >= '0' && s[i] <= '9')) r += s[i];
    }
    cout << r << endl;
    return 0;
}

