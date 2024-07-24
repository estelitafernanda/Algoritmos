/*Leia o tempo de duração de um evento expresso em segundos, converta-o e mostre-o expresso
em horas, minutos e segundos.*/

#include <iostream>
using namespace std;

int main()
{
  int segundo, minuto, hora, evento;
  cout <<"Quantos segundos tem o seu evento?";
  cin >> evento;
  hora = evento / 3600;
  minuto =( evento % 3600 ) / 60;
  segundo = ( evento % 3600 ) % 60;
  cout << "\nSeu evento terá " << hora << " horas, " << minuto << " minutos e " << segundo << " segundos.";
}