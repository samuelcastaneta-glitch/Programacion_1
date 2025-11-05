#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> leerMatriz(int n){
    vector<vector<int>> m(n, vector<int>(n));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >> m[i][j];
        }
    }
    return m;
}

void swapFilas(vector<vector<int>>& m, int A, int B){
    // A,B: 1-based
    swap(m[A-1], m[B-1]);
}

void mostrar(const vector<vector<int>>& m){
    for(auto &row: m){
        for(int x: row) cout<<x<<" ";
        cout<<"\n";
    }
}

int main(){
    int n;
    cout<<"n: "; cin>>n;
    cout<<"Ingresa la matriz "<<n<<"x"<<n<<":\n";
    auto m = leerMatriz(n);
    int A,B;
    cout<<"A B (filas a intercambiar, 1-based): ";
    cin>>A>>B;
    if(A<1||A>n||B<1||B>n){ cout<<"Indices invalidos\n"; return 0; }
    swapFilas(m, A, B);
    cout<<"Matriz resultante:\n";
    mostrar(m);
    return 0;
}