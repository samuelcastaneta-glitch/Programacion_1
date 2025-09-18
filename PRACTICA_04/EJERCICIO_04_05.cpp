// Materia: Programación I, Paralelo 4
// Autor: Samuel Andrés Castañeta Argollo
// Fecha creación: 11/09/2025
// Número de ejercicio: 5

#include <bits/stdc++.h>
using namespace std;

double calcularSalario(double horas, double tarifa) {
    double salario = horas * tarifa;
    if (horas > 8) {
        double extras = horas - 8;
        double bonificacion = extras * tarifa * 0.5; // 50% extra por ejemplo
        cout << "Bonificacion: " << bonificacion << "\n";
        salario += bonificacion;
    }
    return salario;
}

int main() {
    double horas, tarifa;
    cout << "Horas trabajadas: ";
    cin >> horas;
    cout << "Tarifa por hora: ";
    cin >> tarifa;

    cout << "Salario total: " << calcularSalario(horas, tarifa) << "\n";
    return 0;
}
