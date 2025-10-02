// Materia: Programación I, Paralelo 4
// Autor: Samuel Andres Castañeta Argollo
// Fecha creación: 01/10/2025
// Número de ejercicio: 2
// Problema planteado: Mostrar arreglo "voltios" con valores dados
#include <bits/stdc++.h>
using namespace std;
void llenar(vector<double>& v);
void imprimir_formato(const vector<double>& v);
int main() {
    vector<double> voltios(9);
    llenar(voltios);
    imprimir_formato(voltios);
    return 0;
}
void llenar(vector<double>& v) {
    double datos[] = {11.95, 16.32, 12.15, 8.22, 15.98, 26.22, 13.54, 6.45, 17.59};
    for (int i=0;i<9;++i) v[i]=datos[i];
}
void imprimir_formato(const vector<double>& v) {
    cout<<fixed<<setprecision(2);
    for (int i=0;i<9;++i) {
        cout<<v[i];
        if ((i+1)%3==0) cout<<endl<<endl;
        else cout<<" ";
    }
}