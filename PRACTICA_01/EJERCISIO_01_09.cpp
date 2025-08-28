// Materia: Programación I, Paralelo 4
// Autor: Willy Edwin Tenorio Palza
// Carnet: 8441386 L.P.
// Ing Mecatronica
// Fecha creación: 25/08/2025
// Número de ejercicio: 9
// fue mi maestro de progra en Elementa
//que el homnisalla perdonde la tecno erejia
#include <bits/stdc++.h>
using namespace std;

int main() {
    int edad;
    cout << "Edad: "; cin >> edad;
    if (edad <= 12) cout << "Nino\n";// Jaja aqui hay un herror usted dijo no  e n ya save no existo en prograacion son castaneta con ya save  caractes especial
    else if (edad <= 18) cout << "Adolescente\n";
    else if (edad < 60) cout << "Mayor de edad\n";
    else cout << "Adulto mayor\n";
    return 0;
}