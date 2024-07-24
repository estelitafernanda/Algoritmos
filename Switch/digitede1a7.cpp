#include <iostream>
using namespace std;

int main() {
  int dia;
  cout << "\n Digite um número de 1 a 7:";
  cin >> dia;
  switch (dia) {
  case 1:
    cout << "Domingo";
    break;
  case 2:
    cout << "Segunda";
    break;
  case 3:
    cout << "Terça";
    break;
  case 4:
    cout << "Quarta";
    break;
  case 5:
    cout << "Quinta";
    break;
  case 6:
    cout << "Sexta";
    break;
  case 7:
    cout << "Sabádo";
    break;
  default:
    cout << "Número Inválido";
    break;
  }
}