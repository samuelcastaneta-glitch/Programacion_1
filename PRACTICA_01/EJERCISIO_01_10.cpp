// Materia: Programación I, Paralelo 4
// Autor: Willy Edwin Tenorio Palza
// Carnet: 8441386 L.P.
// Ing Mecatronica
// Fecha creación: 25/08/2025
// Número de ejercicio: 10
// Aqui si me diverti
//salve omnisalla
#include <bits/stdc++.h>
using namespace std;
int main() {
    int nota;
    cout << "Nota (0-100): "; cin >> nota;
    if (nota < 0) {
        cout << "En serio eres tan malo que sacaste negativo, serviras mejor como servidor y no seguiste la instrucsion\n";
    } else if (nota > 100) {
        cout << "Estudiante ingreso a tecno servicio, reportar al tecno sacerdote y no leyo el enunsiado mal echo tecno aposto\n";
    } else if (nota >= 51) {
        cout << "Aprobado. ";
        if (nota < 60) cout << "Calificacion = C\n";
        else if (nota < 70) cout << "Calificacion = C+\n";
        else if (nota < 80) cout << "Calificacion = B\n";
        else if (nota < 90) cout << "Calificacion = B+\n";
        else if (nota < 95) cout << "Calificacion = A\n";
        else if (nota == 100) cout << "Calificacion = A+\n";
        else cout << "Calificacion = A\n"; 
    } else {
        cout << "Reprobado\n";
    }
    return 0;
}
