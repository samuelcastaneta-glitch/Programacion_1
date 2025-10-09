// Materia: Programación I, Paralelo 1
// Autor: Samuel Andres Castañeta Argollo
// Fecha creación: 29/10/2024
// Número de ejercicio: 12
#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string s, limpio = "";
    cout << "Ingrese texto: ";
    getline(cin, s);

    for (int i = 0; i < s.size(); i++) {
        if (isalpha(s[i])) limpio += tolower(s[i]);
    }

    bool palin = true;
    for (int i = 0, j = limpio.size()-1; i < j; i++, j--) {
        if (limpio[i] != limpio[j]) palin = false;
    }

    if (palin) cout << "Es palindromo\n";
    else cout << "No es palindromo\n";

    return 0;
}