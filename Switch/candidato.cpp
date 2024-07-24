#include <iostream>
using namespace std;

int main ()
{
  int votos, cand1, cand2, branco, nulo;
  char resposta;
  cand1 = cand2 = branco = nulo = 0;
  do{
    cout << "\n\tDigite seu voto: ";
    cin >> votos;
    switch (votos){
      case 1: cand1++;
        break;
      case 2: cand2++;
        break;
      case 3: branco++;
        break;
      default: nulo++;
    }
    cout << "\n\tDeseja continuar (s-sim, n-nao): ";
    cin >> resposta;
  }while(resposta == 's');
  cout << "\n\tTotal de votos do candidato 1: " << cand1;
  cout << "\n\tTotal de votos do candidato 2: " << cand2;
  cout << "\n\tTotal de votos brancos: " << branco;
  cout << "\n\tTotal de votos nulos: " << nulo;
}