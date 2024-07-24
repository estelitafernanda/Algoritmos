/*Dados três valores X, Y e Z, verifique e escreva se eles podem ser os comprimentos dos lados de um
triângulo e, se forem, verificar e escrever se é um triângulo equilátero, isósceles ou escalenos. Se eles
não formarem um triângulo, escrever esta mensagem. Considere as seguintes propriedades:
• O comprimento de cada lado em um triângulo é menor que a soma dos outros dois lados;
• Equiláteros: tem os comprimentos dos três lados iguais;
• Isósceles: tem os comprimentos de dois lados iguais;
• Escaleno: tem os comprimentos dos três
lados diferentes.*/

#include <iostream>
using namespace std;

int main()
{
  int x, y, z, equilatero, isosceles, escaleno; 

  cout << "Digite um valor: ";
  cin >> x;
  cout << "Digite outro valor: ";
  cin >> y;
  cout << "Digite mais um valor: ";
  cin >> z; 
   
  if ( x == y && x == z && y == z)
  {
    cout << "O seu triângulo é equilátero ";
  }  else if ( x == y || x == z || y == z ) 
     {
      cout << "O seu triângulo é isosceles ";
     }  else if ( x != y && x != z && y != z)
        {
          cout <<" O seu triângulo é escaleno ";
        }  else 
          {
            cout << "Não é um triângulo";
          }
        
}