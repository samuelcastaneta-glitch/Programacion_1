#include <bits/stdc++.h>
using namespace std;

void rotacionDerecha(vector<int>& v, int K){
    int n = v.size();
    if(n==0) return;
    K %= n;
    if(K<0) K += n;
    reverse(v.begin(), v.end());
    reverse(v.begin(), v.begin()+K);
    reverse(v.begin()+K, v.end());
}

int main(){
    int n;
    cout<<"n: "; cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    int K; cout<<"K: "; cin>>K;
    rotacionDerecha(v, K);
    cout<<"Vector rotado: ";
    for(int x: v) cout<<x<<" ";
    cout<<"\n";
    return 0;
}