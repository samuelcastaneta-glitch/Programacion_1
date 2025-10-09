// Materia: Programación I, Paralelo 1
// Autor: Samuel Andres Castañeta Argollo
// Fecha creación: 29/10/2024
// Número de ejercicio: 14
#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cout << "Ingrese texto: ";
    getline(cin, s);

    int a=0,e=0,i=0,o=0,u=0;
    for (int k = 0; k < s.size(); k++) {
        char c = tolower(s[k]);
        if (c == 'a') a++;
        if (c == 'e') e++;
        if (c == 'i') i++;
        if (c == 'o') o++;
        if (c == 'u') u++;
    }

    cout << "a: " << a << endl;
    cout << "e: " << e << endl;
    cout << "i: " << i << endl;
    cout << "o: " << o << endl;
    cout << "u: " << u << endl;
    return 0;
}