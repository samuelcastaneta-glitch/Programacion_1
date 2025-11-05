#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> leerMatriz(int n){
    vector<vector<int>> m(n, vector<int>(n));
    for(int i=0;i<n;i++) for(int j=0;j<n;j++) cin>>m[i][j];
    return m;
}

vector<vector<int>> transpuesta(const vector<vector<int>>& m){
    int n = m.size();
    vector<vector<int>> t(n, vector<int>(n));
    for(int i=0;i<n;i++) for(int j=0;j<n;j++) t[j][i] = m[i][j];
    return t;
}

bool esSimetrica(const vector<vector<int>>& m){
    int n=m.size();
    for(int i=0;i<n;i++) for(int j=0;j<n;j++) if(m[i][j] != m[j][i]) return false;
    return true;
}

int main(){
    int n; cout<<"n: "; cin>>n;
    cout<<"Ingresa matriz "<<n<<"x"<<n<<":\n";
    auto m = leerMatriz(n);
    auto t = transpuesta(m);
    cout<<"Transpuesta:\n";
    for(auto &row: t){ for(int x: row) cout<<x<<" "; cout<<"\n"; }
    cout << (esSimetrica(m) ? "La matriz es simetrica\n" : "La matriz NO es simetrica\n");
    return 0;
}
