
#include <bits/stdc++.h>
using namespace std;

vector<int> eliminarDuplicados(const vector<int>& v){
    unordered_set<int> seen;
    vector<int> res;
    for(int x: v){
        if(seen.insert(x).second) res.push_back(x);
    }
    return res;
}

int main(){
    int n; cout<<"n: "; cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    auto unico = eliminarDuplicados(v);
    cout<<"Resultado sin duplicados: ";
    for(int x: unico) cout<<x<<" ";
    cout<<"\n";
    return 0;
}