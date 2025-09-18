// Materia: Programación I, Paralelo 4
// Autor: Samuel Andrés Castañeta Argollo
// Fecha creación: 05/09/2025
// Número de ejercicio: 6

#include <bits/stdc++.h>
using namespace std;

bool esBisiesto(int anio) {
    return (anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0);
}

int diasMes(int anio, int mes) {
    int dias[] = {31,28,31,30,31,30,31,31,30,31,30,31};
    if (mes == 2 && esBisiesto(anio)) return 29;
    return dias[mes-1];
}

int main() {
    int anio, mes;
    cout << "Ingrese anio y mes (1-12): ";
    cin >> anio >> mes;
    cout << "Dias del mes: " << diasMes(anio, mes) << endl;
    return 0;
}
