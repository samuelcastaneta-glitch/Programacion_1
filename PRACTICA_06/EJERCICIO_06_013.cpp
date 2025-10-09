// Materia: Programación I, Paralelo 1
// Autor: Samuel Andres Castañeta Argollo
// Fecha creación: 29/10/2024
// Número de ejercicio: 13
#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cout << "Ingrese texto: ";
    getline(cin, s);
    bool nuevo = true;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == ' ') nuevo = true;
        else {
            if (nuevo && s[i] >= 'a' && s[i] <= 'z')
                s[i] = s[i] - 32;
            else if (!nuevo && s[i] >= 'A' && s[i] <= 'Z')
                s[i] = s[i] + 32;
            nuevo = false;
        }
    }
    cout << s << endl;
    return 0;
}