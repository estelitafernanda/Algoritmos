/*A escola “APRENDER” faz o pagamento de seus professores por hora/aula. Faça um algoritmo que calcule
e escreva o salário de um professor, sabendo que o valor da hora/aula segue a tabela abaixo:
Professor nível 1 R$ 12,00 por hora aula
Professor nível 2 R$ 17,00 por hora aula
Professor nível 3 R$ 25,00 por hora aula */

#include <iostream>
using namespace std;

int main()
{
  int nivel, horaula;

  cout <<"Qual é o seu nível como professor? ";
  cin >> nivel;
  cout <<"Quantas horas de aula você trabalha? ";
  cin >> horaula;

  int professor1 = 12 * horaula;
  int professor2 = 17 * horaula; 
  int professor3 = 25 * horaula; 
  
  switch (nivel)
  {
    case 1:
    cout << "Seu salário será de: R$ " << professor1;
      break;
    case 2:
    cout << "Seu salário será de: R$ " << professor2;
      break;
    case 3:
    cout << "Seu salário será de: R$ " << professor3;
      break;
    default:
    cout << "Código inválido";
  }
}