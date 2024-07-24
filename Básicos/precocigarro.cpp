/*Calcule e escreva a quantidade de dinheiro gasta por um fumante a partir da leitura das
informações número de anos que ele fuma, quantidade] de cigarros fumados por dia e preço de
uma carteira.*/

#include <iostream>
using namespace std;

int main ()
{
  int ano, cigarroDia, quantidade;
  float preco, TotalGasto;
  cout <<"Digite em anos a quanto tempo você fuma:";
  cin >>ano;
  cout <<"Digite quantos cigarros você fuma por dia:";
  cin >>cigarroDia;
  cout <<"Digite o preço da sua carteira de cigarro:";
  cin >>preco;
  cout <<"Digite quantos cigarros vem na carteira:";
  cin >>quantidade;
  TotalGasto = (ano*365)* cigarroDia * (preco/quantidade);
  cout <<"O seu gasto total em cigarros:" <<TotalGasto;
}