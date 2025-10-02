// Materia: Programación I, Paralelo 4
// Autor: Samuel Andres Castañeta Argollo
// Fecha creación: 01/10/2025
// Número de ejercicio: 4
// Problema planteado: Multiplicacion elemento a elemento de 2 vectores
#include <bits/stdc++.h>
using namespace std;
vector<double> leer_vector(int n, const string& nombre);
vector<double> multiplicar_vectores(const vector<double>& a, const vector<double>& b);
void imprimir_vector(const vector<double>& v, const string& titulo);
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N;
    cout << "Dimension N: ";
    cin >> N;
    if (N <= 0) { cout << "N invalido\n"; return 0; }

    auto v1 = leer_vector(N, "v1");
    auto v2 = leer_vector(N, "v2");
    auto producto = multiplicar_vectores(v1, v2);
    imprimir_vector(producto, "Producto elemento a elemento:");
    return 0;
}
vector<double> leer_vector(int n, const string& nombre) {
    vector<double> v(n);
    for (int i=0;i<n;++i) {
        cout << nombre << "["<<i<<"] = ";
        cin >> v[i];
    }
    return v;
}
vector<double> multiplicar_vectores(const vector<double>& a, const vector<double>& b) {
    int n = a.size();
    vector<double> c(n);
    for (int i=0;i<n;++i) c[i] = a[i] * b[i];
    return c;
}
void imprimir_vector(const vector<double>& v, const string& titulo) {
    cout << titulo << "\n";
    cout << fixed << setprecision(4);
    for (size_t i=0;i<v.size();++i) cout << v[i] << (i+1==v.size()? "\n":" ");
}