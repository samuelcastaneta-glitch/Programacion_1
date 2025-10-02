// Materia: Programación I, Paralelo 4
// Autor: Samuel Andres Castañeta Argollo
// Fecha creación: 01/10/2025
// Número de ejercicio: 7
// Problema planteado: Rellenar vector (max 10) hasta numero negativo o hasta llenarlo, luego imprimir los introducidos
#include <bits/stdc++.h>
using namespace std;
vector<int> rellenar_hasta_negativo(int max_elem);
void imprimir_vector(const vector<int>& v);
int main() {
    auto v = rellenar_hasta_negativo(10);
    cout << "Elementos introducidos (" << v.size() << "):\n";
    imprimir_vector(v);
    return 0;
}
vector<int> rellenar_hasta_negativo(int max_elem) {
    vector<int> v;
    for (int i=0;i<max_elem;++i) {
        int x;
        cout << "Ingrese numero ["<<i<<"] (negativo para terminar): ";
        cin >> x;
        if (x < 0) break;
        v.push_back(x);
    }
    return v;
}
void imprimir_vector(const vector<int>& v) {
    for (size_t i=0;i<v.size();++i) {
        cout << v[i] << (i+1==v.size()? "\n":" ");
    }
}