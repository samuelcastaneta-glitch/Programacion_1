#include <bits/stdc++.h>
using namespace std;

vector<int> leerCalificaciones(int N) {
    vector<int> v(N);
    for(int i=0;i<N;i++){
        cout << "calificacion["<<i<<"]=";
        cin >> v[i];
    }
    return v;
}

long long suma(const vector<int>& v){
    long long s=0;
    for(int x: v) s += x;
    return s;
}

vector<double> desviaciones(const vector<int>& v, double promedio){
    vector<double> d(v.size());
    for(size_t i=0;i<v.size();++i) d[i] = v[i] - promedio;
    return d;
}

double varianza(const vector<double>& desv){
    double s=0;
    for(double x: desv) s += x*x;
    return s / (desv.empty() ? 1 : desv.size());
}

int main(){
    int N;
    cout << "N: "; cin >> N;
    if(N<=0) { cout<<"N debe ser >0\n"; return 0; }
    auto calificaciones = leerCalificaciones(N);
    long long S = suma(calificaciones);
    double promedio = double(S) / N;
    auto desv = desviaciones(calificaciones, promedio);
    double var = varianza(desv);

    cout << "Suma total: " << S << "\n";
    cout << fixed << setprecision(4);
    cout << "Promedio: " << promedio << "\n";
    cout << "Valor   Desviacion\n";
    for(int i=0;i<N;i++){
        cout << calificaciones[i] << "    " << desv[i] << "\n";
    }
    cout << "Varianza: " << var << "\n";
    return 0;
}