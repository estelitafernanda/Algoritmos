#include <iostream>
using namespace  std;

int main() 
{
  float salario, percentualIndividual, valorIndividual, valorFilho;
  int qtdFilhos;
  
  cout <<"Digite seu salario:";
  cin >> salario;
  cout <<"Digite quantos filhos você tem:";
  cin >> qtdFilhos; 
  cout <<"Digite o seu perceptual individual:";
  cin >> percentualIndividual;
  
  valorIndividual = salario * (percentualIndividual/100);
  valorFilho = (salario - valorIndividual)/qtdFilhos;
  cout<<"valor individual:"<<valorIndividual;
  cout<<"valor destinado para cada filho:"<< valorFilho;
 }