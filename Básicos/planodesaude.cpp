#include <iostream>
using namespace std;
  int main(){
  int idade;
    cout <<"Digite sua idade: ";
    cin >> idade;
    
    if (idade<10){
     cout <<"Você pagará R$180,00";
    }else if(idade>=10 && idade<=30){
       cout <<"Você pagará R$150,00";
    }else if(idade>=31 && idade<=60){         
      cout <<"Você pagará R$ 195,00";
    }else{
       cout <<"Você pagará R$ 230,00";
    }
}