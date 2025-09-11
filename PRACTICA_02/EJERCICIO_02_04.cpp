// Materia: Programación I, Paralelo 4
// Autor: Samuel Andres Castañeta Argollo
// Carnet: 8441386 L.P.
// Carrera del estudiante: Ingeniería Mecatronica
// Fecha creación: 10/09/2025
// Número de ejercicio: 4
#include <bits/stdc++.h>
using namespace std;
int main() {
    srand(time(0));
    int secreto = rand()%51;
    int intento, min=0, max=50;

    cout << "Estoy pensando un numero entre 0 y 50" << endl;
    for (int i=1; i<=5; i++) {
        cout << "Intento " << i << "\n? ";
        cin >> intento;
        if (intento==secreto) {
            cout << "Felicitaciones... Adivinaste el numero" << endl;
            return 0;
        }
        if (intento < secreto) min = intento;
        else max = intento;
        cout << "El numero esta entre " << min << " y " << max << endl;
    }
    cout << "Lo siento, el numero era " << secreto << endl;
    return 0;
}