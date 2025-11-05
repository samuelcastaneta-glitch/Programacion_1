#include <bits/stdc++.h>
using namespace std;

vector<int> aleatorios(int N, int A, int B) {
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dis(A,B);
    vector<int> v(N);
    for(int i=0;i<N;i++) v[i]=dis(gen);
    return v;
}

vector<int> sumaVec(const vector<int>& a, const vector<int>& b){
    int N=a.size();
    vector<int> c(N);
    for(int i=0;i<N;i++) c[i]=a[i]+b[i];
    return c;
}

vector<int> multConInvertido(const vector<int>& a, const vector<int>& b){
    int N=a.size();
    vector<int> c(N);
    for(int i=0;i<N;i++) c[i]= a[i] * b[N-1-i];
    return c;
}

void mostrar(const vector<int>& v, const string& titulo){
    cout<<titulo<<": ";
    for(int x: v) cout<<x<<" ";
    cout<<"\n";
}

int main(){
    int N, A, B;
    cout<<"N A B: ";
    cin>>N>>A>>B;
    if(N<=0 || A>B){ cout<<"Parametros invalidos\n"; return 0; }
    auto v1 = aleatorios(N,A,B);
    auto v2 = aleatorios(N,A,B);
    auto v3 = sumaVec(v1,v2);
    auto v4 = multConInvertido(v1,v2);

    mostrar(v1,"vector1");
    mostrar(v2,"vector2");
    mostrar(v3,"vector3 = v1+v2");
    mostrar(v4,"vector4 = v1 * invertido(v2)");
    return 0;
}