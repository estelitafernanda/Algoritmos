#include <iostream>
using namespace std;
int main (){
  int jogador1, jogador2, totalJog1=0, totalJog2=0;
  do{
      cout <<"Jogador 1 faça a sua jogada (1-Pedra, 2-Papel, 3-Tesoura): ";
      cin >> jogador1;
      cout <<"Jogador 2 faça a sua jogada (1-Pedra, 2-Papel, 3-Tesoura): ";
      cin >> jogador2;
      if (jogador1==jogador2){
        cout <<"Empate, jogue novamente!";
      }else{
        //contabilização das vitórias
        //condições de vitória do jogador 1: 1 e 3, 2 e 1, 3 e 2
        if(((jogador1==1)&&(jogador2==3))||((jogador1==2)&&(jogador2==1))|| ((jogador1==3)&&(jogador2==2))){ 
          totalJog1++;
          //soma uma vitória para o jogador 1 }else{ totalJog2++;
        }
      }
  }while((totalJog1!=3)&&(totalJog2!=3));
  if(totalJog1==3){
      cout << "\n\tO jogador 1 eh o vencedor!";
  }else{
    cout << "\n\tO jogador 2 eh o vencedor!";
  }
    cout << "\n\tFim de Programa\n\t";
    system("pause");
}
