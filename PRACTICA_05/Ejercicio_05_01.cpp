// Materia: Programación I, Paralelo 4
// Autor: Samuel Andres Castañeta Argollo
// Fecha creación: 01/10/2025
// Número de ejercicio: 1
// Problema planteado: Generar listas con vectores (aleatorio) usando funciones
#include <bits/stdc++.h>
using namespace std;
void generar_voltajes(vector<double> &v, int n);
void generar_temperaturas(vector<double> &v, int n);
void generar_caracteres(vector<char> &v, int n);
void generar_anios(vector<int> &v, int n);
void generar_velocidades(vector<double> &v, int n);
void generar_distancias(vector<double> &v, int n);
template <typename T>
void imprimir_vector(const vector<T> &v, const string &titulo);
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  vector<double> voltajes(100);
  vector<double> temperaturas(50);
  vector<char> caracteres(30);
  vector<int> anios(100);
  vector<double> velocidades(32);
  vector<double> distancias(1000);
  generar_voltajes(voltajes, 100);
  generar_temperaturas(temperaturas, 50);
  generar_caracteres(caracteres, 30);
  generar_anios(anios, 100);
  generar_velocidades(velocidades, 32);
  generar_distancias(distancias, 1000);
  imprimir_vector(voltajes, "Voltajes (100) [20.00 - 220.00]:");
  imprimir_vector(temperaturas, "Temperaturas (50) [0.00 - 100.00]:");
  imprimir_vector(caracteres, "Caracteres (30) alfanumericos:");
  imprimir_vector(anios, "Anios (100) [1990 - 2025]:");
  imprimir_vector(velocidades, "Velocidades (32) [10.00 - 300.00]:");
  imprimir_vector(distancias, "Distancias (1000) [1.00 - 1000.00]:");

  return 0;
}
void generar_voltajes(vector<double> &v, int n) {
  random_device rd;
  mt19937 gen(rd());
  uniform_real_distribution<> dis(20.0, 220.0);
  for (int i = 0; i < n; ++i)
    v[i] = dis(gen);
}
void generar_temperaturas(vector<double> &v, int n) {
  random_device rd;
  mt19937 gen(rd());
  uniform_real_distribution<> dis(0.0, 100.0);
  for (int i = 0; i < n; ++i)
    v[i] = dis(gen);
}
void generar_caracteres(vector<char> &v, int n) {
  string alpha =
      "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789";
  random_device rd;
  mt19937 gen(rd());
  uniform_int_distribution<> dis(0, (int)alpha.size() - 1);
  for (int i = 0; i < n; ++i)
    v[i] = alpha[dis(gen)];
}
void generar_anios(vector<int> &v, int n) {
  random_device rd;
  mt19937 gen(rd());
  uniform_int_distribution<> dis(1990, 2025);
  for (int i = 0; i < n; ++i)
    v[i] = dis(gen);
}
void generar_velocidades(vector<double> &v, int n) {
  random_device rd;
  mt19937 gen(rd());
  uniform_real_distribution<> dis(10.0, 300.0);
  for (int i = 0; i < n; ++i)
    v[i] = dis(gen);
}
void generar_distancias(vector<double> &v, int n) {
  random_device rd;
  mt19937 gen(rd());
  uniform_real_distribution<> dis(1.0, 1000.0);
  for (int i = 0; i < n; ++i)
    v[i] = dis(gen);
}
template <typename T>
void imprimir_vector(const vector<T> &v, const string &titulo) {
  cout << titulo << endl;
  cout << fixed << setprecision(2);
  for (size_t i = 0; i < v.size(); ++i) {
    if constexpr (is_same<T, char>::value)
      cout << v[i];
    else
      cout << v[i];
    if ((i + 1) % 10 == 0)
      cout << endl;
    else
      cout << " ";
  }
  cout << endl << endl;
}