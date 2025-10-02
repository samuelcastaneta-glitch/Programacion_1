// Materia: Programación I, Paralelo 4
// Autor: Samuel Andres Castañeta Argollo
// Fecha creación: 01/10/2025
// Número de ejercicio: 6
// Problema planteado: vector3 = vector1 + vector2 (sumar elemento a elemento)
#include <bits/stdc++.h>
using namespace std;
void leer_vector(vector<int>& v, const string& nombre);
vector<int> sumar_vectores(const vector<int>& a, const vector<int>& b);
void imprimir_vector(const vector<int>& v, const string& titulo);
int main() {
    vector<int> vector1(5), vector2(5), vector3(5);
    leer_vector(vector1, "vector1");
    leer_vector(vector2, "vector2");
    vector3 = sumar_vectores(vector1, vector2);
    imprimir_vector(vector3, "vector3 = vector1 + vector2:");
    return 0;
}
void leer_vector(vector<int>& v, const string& nombre) {
    for (int i=0;i<(int)v.size();++i) {
        cout << nombre << "["<<i<<"] = ";
        cin >> v[i];
    }
}
vector<int> sumar_vectores(const vector<int>& a, const vector<int>& b) {
    vector<int> c(a.size());
    for (size_t i=0;i<a.size();++i) c[i] = a[i] + b[i];
    return c;
}
void imprimir_vector(const vector<int>& v, const string& titulo) {
    cout << titulo << "\n";
    for (int i=0;i<(int)v.size();++i) cout << v[i] << (i+1==(int)v.size()? "\n":" ");
}