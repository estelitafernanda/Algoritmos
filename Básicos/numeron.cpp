/*Leia um número inteiro N e um percentual qualquer e escreva qual o valor do percentual
aplicado ao número.*/

#include <iostream>
using namespace std;

int main ()
{
  float n, percentual, total;
  cout <<"Digite um número inteiro e natural:";
  cin >> n;
  cout <<"Qual o percentual que você deseja aplicar:";
  cin >> percentual;
  total= (n * percentual/ 100);
  cout <<"resultado:" << total;
}