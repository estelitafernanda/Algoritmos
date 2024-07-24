/*Leia um número, verifique e escreva se este número é par ou ímpar. Se for par, verifique e escreva se é
maior que 100 ou não e se for ímpar verifique e escreva se é positivo ou negativo.*/

#include <iostream>
using namespace std;

int main ()
{
  int numero;
  
  cout <<"digite um numero:";
  cin >> numero;
  
  if (numero % 2 == 0) {
    cout << numero << " é par";
  }if (numero > 100){
    cout <<" e maior que 100";
  }else{
     cout <<" e menor que 100";
  }else{
    cout << numero << " é impar";
  }if (numero > 0){
    cout <<" e positivo";
  }else{
    cout <<" e negativo";
  }
   
}