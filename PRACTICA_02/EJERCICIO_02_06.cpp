// Materia: Programación I, Paralelo 4
// Autor: Samuel Andres Castañeta Argollo
// Carnet: 8441386 L.P.
// Carrera del estudiante: Ingeniería Mecatronica
// Fecha creación: 10/09/2025
// Número de ejercicio: 6
#include <bits/stdc++.h>
using namespace std;
bool esPrimo(int n) {
    if (n<=1) return false;
    for (int i=2; i*i<=n; i++) 
        if (n%i==0) return false;
    return true;
}
int main() {
    int n, num, cont=0;
    srand(time(0));
    cout << "Ingrese N: ";
    cin >> n;
    for (int i=0; i<n; i++) {
        num = 1 + rand()%10000;
        cout << num << " ";
        if (esPrimo(num)) cont++;
    }
    cout << "\nCantidad de numeros primos: " << cont << endl;
    return 0;
}