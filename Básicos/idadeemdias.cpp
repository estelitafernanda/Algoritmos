/*Leia a idade de uma pessoa expressa em anos, meses e dias e mostre-a expressa apenas em dias.
Obs: Considere cada mês com 30 dias.*/


#include <iostream>
using namespace std;

int main ()
{
  int ano, mes, dia, TotalDias;
  cout <<"Digite sua idade em anos:";
  cin >>ano;
  cout <<"Digite em meses:";
  cin >>mes;
  cout <<"Digite em dias:";
  cin >>dia;
  TotalDias =(ano * 365) + (mes * 30) + dia; 
  cout <<"Total em dias:" << TotalDias;
}