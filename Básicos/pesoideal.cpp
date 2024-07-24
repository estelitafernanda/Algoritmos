/*Calcule o peso ideal de uma pessoa. Dados de entrada: altura e gênero (“m”-masculino ou “f”-feminino).
Utilize as seguintes fórmulas para cálculo do peso ideal:
• Masculino = (72,7 x altura) - 58
• Feminino = (62,1 x altura) - 44,7 */

#include <iostream>
using namespace std;

int main ()
{
  float peso, altura, masculino, feminino; 
  char genero;
  
  cout << "Qual é a sua altura? ";
  cin >> altura; 
  cout << "Qual é o seu gênero (m-masculino f-feminino): " ;
  cin >> genero;

  masculino = ((72.7 * altura) - 58) ;
  feminino = ((62.1 * altura) - 44.7) ;

  if (genero == 'm'){
    cout <<"O seu peso ideal é: " << masculino;
  } else if (genero == 'f'){
      cout << "O seu peso ideal é: " << feminino;
  } else{
      cout << "código inválido" ;
  } 
}