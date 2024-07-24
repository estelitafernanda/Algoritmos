/*Faça uma função que recebe um número inteiro por parâmetro e retorna 
verdadeiro se ele for par e falso se for ímpar.*/
#include <iostream>
using namespace std;

bool parOuImpar (int num);

int main() {
  int x;
  bool resultado;
  cout <<"Digite um número: ";
  cin >> x;

  resultado = parOuImpar(x);

  if (resultado){
    cout <<"Esse número é par";
  }else {
    cout<<"Esse número é impar";
  }
}
bool parOuImpar (int num){
  if (num %2 == 0){
    return true;
  }else {
    return false;
  }
}