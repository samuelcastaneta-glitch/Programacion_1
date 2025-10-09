// Materia: Programación I, Paralelo 1
// Autor: Samuel Andres Castañeta Argollo
// Fecha creación: 29/10/2024
// Número de ejercicio: 4
#include <iostream>
using namespace std;

int main() {
    int n, k, v[100];
    cout << "Tamano del vector: ";
    cin >> n;
    cout << "Ingrese los elementos:\n";
    for (int i = 0; i < n; i++) cin >> v[i];
    cout << "Rotar a la derecha cuantas posiciones?: ";
    cin >> k;

    for (int r = 0; r < k; r++) {
        int ultimo = v[n-1];
        for (int i = n-1; i > 0; i--) v[i] = v[i-1];
        v[0] = ultimo;
    }

    cout << "Vector rotado:\n";
    for (int i = 0; i < n; i++) cout << v[i] << " ";
    cout << endl;
    return 0;
}
