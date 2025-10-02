// Materia: Programación I, Paralelo 4
// Autor: Samuel Andres Castañeta Argollo
// Fecha creación: 01/10/2025
// Número de ejercicio: 5
// Problema planteado: Combinar (concatenar) dos vectores en un tercero
#include <bits/stdc++.h>
using namespace std;
vector<int> leer_vector_int(int n, const string& nombre);
vector<int> combinar_vectores(const vector<int>& a, const vector<int>& b);
void imprimir_vector(const vector<int>& v, const string& titulo);
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N;
    cout << "Dimension N: ";
    cin >> N;
    if (N <= 0) { cout << "N invalido\n"; return 0; }

    auto v1 = leer_vector_int(N, "v1");
    auto v2 = leer_vector_int(N, "v2");
    auto combinado = combinar_vectores(v1, v2);
    imprimir_vector(combinado, "Vector combinado (v1 + v2):");
    return 0;
}
vector<int> leer_vector_int(int n, const string& nombre) {
    vector<int> v(n);
    for (int i=0;i<n;++i) {
        cout << nombre << "["<<i<<"] = ";
        cin >> v[i];
    }
    return v;
}
vector<int> combinar_vectores(const vector<int>& a, const vector<int>& b) {
    vector<int> c;
    c.reserve(a.size()+b.size());
    c.insert(c.end(), a.begin(), a.end());
    c.insert(c.end(), b.begin(), b.end());
    return c;
}
void imprimir_vector(const vector<int>& v, const string& titulo) {
    cout << titulo << "\n";
    for (size_t i=0;i<v.size();++i) cout << v[i] << (i+1==v.size()? "\n":" ");
}
