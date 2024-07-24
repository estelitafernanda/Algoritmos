Uma empresa concederá um aumento de salário aos seus funcionários, variável de acordo com o cargo, 
conforme a tabela abaixo. Faça um algoritmo que leia o salário e o código do cargo de um funcionário e 
calcule o novo salário. Se o cargo do funcionário não estiver na tabela, ele deverá receber 40% de 
aumento. Mostre o salário antigo, o novo salário e a diferença.
CÓDIGO   CARGO    PERCENTUAL 
101     Gerente      10% 
102    Engenheiro    20% 
103     Técnico      30% 

#include <iostream>
using namespace std;

int main()
{
  int codigo, salario;

  cout <<"Qual é o seu código? ";
  cin >> codigo;

  cout <<"Qual é o seu salário? ";
  cin >> salario;

  int gerente = salario + ((salario * 10)/ 100);
  int engenheiro = salario + ((salario * 20)/ 100);
  int tecnico = salario + ((salario * 30)/ 100);

  switch (codigo)
    {
      case 101: 
      cout << "O seu salário era de: R$ " << salario << "\nCom o aumento ficará: R$ " << gerente; 
        break;
      case 102:
      cout << "O seu salário era de: R$ " << salario <<"\nCom o aumento ficará: R$ " << engenheiro;
        break;
      case 103:
      cout << "O seu salário era de: R$ " << salario <<"\nCom o aumento ficará: R$ " << tecnico; 
        break;
      default:
        cout << "código invalido";
    }
}