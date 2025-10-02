// Materia: Programación I, Paralelo 4
// Autor: Samuel Andres Castañeta Argollo
// Fecha creación: 01/10/2025
// Número de ejercicio: 3
// Problema planteado: Suma, promedio, desviaciones y varianza en arreglo de calificaciones
#include <bits/stdc++.h>
using namespace std;
vector<int> leer_calificaciones(int n);
double suma(const vector<int>& v);
double promedio(const vector<int>& v);
vector<double> calcular_desviaciones(const vector<int>& v, double prom);
double calcular_varianza(const vector<double>& desviaciones);
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N;
    cout << "Ingrese el numero de calificaciones N: ";
    if (!(cin >> N) || N <= 0) {
        cout << "N invalido\n";
        return 0;
    }
    vector<int> cal = leer_calificaciones(N);
    double s = suma(cal);
    double prom = promedio(cal);
    vector<double> desvi = calcular_desviaciones(cal, prom);
    double var = calcular_varianza(desvi);
    cout << fixed << setprecision(2);
    cout << "Suma total: " << s << "\n";
    cout << "Promedio: " << prom << "\n\n";
    cout << "Calificacion  Desviacion\n";
    for (int i=0;i<N;++i) {
        cout << setw(10) << cal[i] << "   " << setw(10) << desvi[i] << "\n";
    }
    cout << "\nVarianza: " << var << "\n";
    return 0;
}
vector<int> leer_calificaciones(int n) {
    vector<int> v(n);
    for (int i=0;i<n;++i) {
        cout << "Calificacion [" << i << "]: ";
        cin >> v[i];
    }
    return v;
}
double suma(const vector<int>& v) {
    double s=0;
    for (int x: v) s += x;
    return s;
}
double promedio(const vector<int>& v) {
    if (v.empty()) return 0.0;
    return suma(v) / v.size();
}
vector<double> calcular_desviaciones(const vector<int>& v, double prom) {
    vector<double> d(v.size());
    for (size_t i=0;i<v.size();++i) d[i] = v[i] - prom;
    return d;
}
double calcular_varianza(const vector<double>& desviaciones) {
    double suma_cuad = 0.0;
    for (double d: desviaciones) suma_cuad += d*d;
    if (desviaciones.empty()) return 0.0;
    return suma_cuad / desviaciones.size();
}
