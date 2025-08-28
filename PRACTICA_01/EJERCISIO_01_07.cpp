// Materia: Programación I, Paralelo 4
// Autor: Willy Edwin Tenorio Palza
// Carnet: 8441386 L.P.
// Ing Mecatronica
// Fecha creación: 25/08/2025
// Número de ejercicio: 7
// Bueno  aver que puedo desir creo que 
//Wue el omnisalla valore el espiritu
#include <bits/stdc++.h>
using namespace std;
int main() {
    char ch;
    cout << "Ingrese un caracter: ";
    cin >> ch;
    if (isalpha(static_cast<unsigned char>(ch))) {
        char c = tolower(static_cast<unsigned char>(ch));
        if (c=='a'||c=='e'||c=='i'||c=='o'||c=='u') cout << "Vocal\n";
        else cout << "Consonante\n";
    } else {
        cout << "Caracter especial\n";
    }
    return 0;
}