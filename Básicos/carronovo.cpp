/*O custo ao consumidor de um carro novo é a soma do custo de fábrica com a percentagem do
distribuidor e dos impostos, ambos aplicados ao custo de fábrica. Supondo que a percentagem
do distribuidor seja de 28% e os impostos de 45%, escreva um algoritmo que leia o custo de
fábrica de um carro e escreva o custo ao consumidor.*/

#include <iostream>
using namespace std;

int main ()
{
  int consumidor, carro, impostos, resultado;
  
  cout <<"Qual é o valor do seu carro? ";
  cin >> carro;

  impostos = (28 + 45);
  consumidor = ((carro * impostos)/100);
  resultado = carro - consumidor ;
  cout <<"O custo para fabricar seu carro é: R$ "<< resultado;
  cout <<"\nO imposto aplicado ao seu carro é: R$ " << consumidor;
  
}