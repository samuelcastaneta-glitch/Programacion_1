// Materia: Programación I, Paralelo 4
// Autor: Willy Edwin Tenorio Palza
// Carnet: 8441386 L.P.
// Ing Mecatronica
// Fecha creación: 25/08/2025
// Número de ejercicio: 15
// Bueno en fin esto me recuerda a las practicas
// Spirit of machine hel this soul for omnisalla
#include <bits/stdc++.h>
using namespace std;
int main() {
  int N;
  cout << "Cantidad de notas: ";
  cin >> N;
  double suma = 0, nota;
  for (int i = 1; i <= N; ++i) {
    cout << "Nota " << i << ": ";
    cin >> nota;
    suma += nota;
  }
  double promedio = (N > 0) ? suma / N : 0.0;
  cout << fixed << setprecision(2) << "Promedio = " << promedio << "\n";
  return 0;
}