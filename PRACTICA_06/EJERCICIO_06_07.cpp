// Materia: Programación I, Paralelo 1
// Autor: Samuel Andres Castañeta Argollo
// Fecha creación: 29/10/2024
// Número de ejercicio: 7
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int n;
    cout << "Numero de pixeles: ";
    cin >> n;
    int pix[1000];
    int rango[26] = {0};

    srand(time(0));
    for (int i = 0; i < n; i++) {
        pix[i] = rand() % 256;
        int seg = pix[i] / 10;
        if (seg > 25) seg = 25;
        rango[seg]++;
    }

    for (int i = 0; i < 26; i++) {
        int ini = i * 10;
        int fin = (i == 25) ? 255 : ini + 9;
        cout << "[" << ini << "-" << fin << "] = " << rango[i] << endl;
    }
    return 0;
}