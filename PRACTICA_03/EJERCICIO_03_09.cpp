// Materia: Programación I, Paralelo 4
// Autor: Samuel Andrés Castañeta Argollo
// Fecha creación: 05/09/2025
// Número de ejercicio: 9

#include <bits/stdc++.h>
using namespace std;

void verificarHoras(int minutos) {
    int jornada = 8 * 60;
    if (minutos > jornada)
        cout << "Trabajo " << (minutos-jornada) << " minutos extra.\n";
    else if (minutos < jornada)
        cout << "Debe " << (jornada-minutos) << " minutos a la empresa.\n";
    else
        cout << "Cumplio justo su jornada.\n";
}

int main() {
    int minutos;
    cout << "Ingrese minutos trabajados: ";
    cin >> minutos;
    verificarHoras(minutos);
    return 0;
}
