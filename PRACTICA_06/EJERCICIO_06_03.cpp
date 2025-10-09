// Materia: Programación I, Paralelo 1
// Autor: Samuel Andres Castañeta Argollo
// Fecha creación: 29/10/2024
// Número de ejercicio: 3
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    string nombres[10] = {"Sam","Guilliman ","Magnus ","Fulgrim","Lionel","Rogal","Sanguinius","Belisarius","Vulcan","Leman"};
    string apellidos[10] = {"Russ","Robute","Dorm","Jonson","Coul","Nocturn","Sanguinor","Hex","Cain","NSigilita"};
    int edades[10] = {18,20,22,25,30,35,40,45,50,55};

    int n;
    cout << "Cuantas selecciones quieres? ";
    cin >> n;

    srand(time(0));
    for (int i = 0; i < n; i++) {
        int a = rand() % 10;
        int b = rand() % 10;
        int c = rand() % 10;
        cout << nombres[a] << " " << apellidos[b] << " " << edades[c] << " anios" << endl;
    }
    return 0;
}
