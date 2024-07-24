/*Leia o valor de uma compra nas Lojas Sua Melhor Compra e mostre o valor das prestações de
acordo com a quantidade de parcelas desejada pelo usuário. A loja está vendendo seus produtos
a vista ou parcelado em até 10 vezes sem juros.*/

#include <iostream>
using namespace std;

int main ()
{
  int prestacao;
  float preco, valor;
  
  cout <<"Qual foi o valor da sua compra na loja sua melhor compra?";
  cin >>preco;
  cout <<"Em quantas vezes deseja parcelar?";
  cin >> prestacao;
  
  valor = (preco / prestacao);
  cout <<"O valor das prestações ficaram:" << valor <<"reais";
}