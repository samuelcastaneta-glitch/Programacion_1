#include <bits/stdc++.h>
using namespace std;

bool esPrimo(int n){
    if(n<=1) return false;
    if(n<=3) return true;
    if(n%2==0) return false;
    for(int i=3;i*i<=n;i+=2) if(n%i==0) return false;
    return true;
}

int sumaDigitos(int x){
    x = abs(x);
    int s=0;
    while(x>0){ s += x%10; x/=10;}
    return s;
}

int main(){
    vector<int> v;
    cout<<"Introduce numeros (negativo para terminar):\n";
    while(true){
        int x; cin>>x;
        if(x<0) break;
        v.push_back(x);
    }
    cout<<"Vector: ";
    for(int x: v) cout<<x<<" ";
    cout<<"\n";

    long long sumaPares=0;
    long long sumaPrimos=0;
    long long sumaDigTotal=0;
    for(int x: v){
        if(x%2==0) sumaPares += x;
        if(esPrimo(x)) sumaPrimos += x;
        sumaDigTotal += sumaDigitos(x);
    }
    cout<<"Suma numeros pares: "<<sumaPares<<"\n";
    cout<<"Suma numeros primos: "<<sumaPrimos<<"\n";
    cout<<"Suma de digitos de todos los elementos: "<<sumaDigTotal<<"\n";
    return 0;
}