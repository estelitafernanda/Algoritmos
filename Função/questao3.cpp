/*Escreva uma função que recebe 2 números inteiros n1 e n2 como entrada e retorna a soma de todos os números inteiros contidos no intervalo [n1,n2]. Use esta função em um programa que lê n1 e n2 do usuário e imprime a soma.*/
#include <iostream>
using namespace std;

int somaNumeros (int n1, int n2);

int main (){
  int n1, n2;
  cout <<"Digite dois números: ";
  cin >> n1 >> n2;

  int soma = somaNumeros (n1, n2); 
  
  cout <<"Soma do intervalo de n1 e n2: " << soma; 
}
int somaNumeros (int n1, int n2){
  int i, soma = 0;
  for (i = n1; i <= n2; i++){
     soma += i;
  }
  return soma; 
}