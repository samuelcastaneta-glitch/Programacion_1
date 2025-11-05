#include <bits/stdc++.h>
using namespace std;

vector<vector<long long>> generarMatriz(int n){
    vector<vector<long long>> m(n, vector<long long>(n));
    for(int i=0;i<n;i++){
        long long inicio = 1 + 2LL*i;
        for(int j=0;j<n;j++){
            m[i][j] = inicio + j;
        }
    }
    return m;
}

int main(){
    int n;
    cout<<"n: "; cin>>n;
    if(n<=0) { cout<<"n invalido\n"; return 0; }
    auto m = generarMatriz(n);
    cout<<"Matriz generada:\n";
    for(auto &row: m){
        for(auto x: row) cout<<setw(4)<<x;
        cout<<"\n";
    }

    long long sumaUltCol = 0;
    for(int i=0;i<n;i++) sumaUltCol += m[i][n-1];

    long long prodUltFila = 1;
    for(int j=0;j<n;j++) prodUltFila *= m[n-1][j];

    cout<<"Suma ultima columna: "<<sumaUltCol<<"\n";
    cout<<"Producto ultima fila: "<<prodUltFila<<"\n";
    return 0;
}
