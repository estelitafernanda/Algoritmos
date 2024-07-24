/*Num determinado Estado, para transferências de veículos o DETRAN cobra uma taxa de 1% para carros 
fabricados antes de 1990 e uma taxa de 1.5% para os fabricados a partir de 1990, taxa esta que incide 
sobre o preço do carro. Elabore um algoritmo que leia o ano e o preço do carro, calcule e escreva o 
imposto a ser pago.*/

#include <iostream>
using namespace std;

int main ()
{
  float preco, imposto1, imposto2; 
  int ano;

  cout <<"Digite o ano do seu carro:\n ";
  cin >> ano;
  cout <<"Digite o valor pago pelo seu carro:\n ";
  cin >> preco;

  imposto1 = preco * 1 /100;
  imposto2 = preco * 1.5/100; 

  if (ano <= 1990)
  {
    cout <<"O seu imposto será:\n " << imposto1;
  } else if (ano > 1990)
    {
      cout <<"O seu imposto será:\n " << imposto2;
    } else {
      cout <<"ano inválido";
    }
}