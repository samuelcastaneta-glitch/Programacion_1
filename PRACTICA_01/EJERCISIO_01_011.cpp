// Materia: Programación I, Paralelo 4
// Autor: Willy Edwin Tenorio Palza
// Carnet: 8441386 L.P.
// Ing Mecatronica
// Fecha creación: 25/08/2025
// Número de ejercicio: 11
// En mi primer semestre en meca tuve un problema con python
//que el espiritu lo ayude el omnisañña
#include <bits/stdc++.h>
using namespace std;
int main() {
    int m;
    cout << "Mes (1-12): "; cin >> m;
    const string meses[13] = {"","Enero","Febrero","Marzo","Abril","Mayo","Junio","Julio","Agosto","Septiembre","Octubre","Noviembre","Diciembre"};
    if (m >= 1 && m <= 12) cout << meses[m] << "\n";
    else cout << "Mes invalido\n";
    return 0;
}