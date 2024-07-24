#include <iostream>

using namespace std;

int main() {
    char operacao;
    int num, resultado;
  
    cout <<"Digite um número: \n";
    cin >> num;
    resultado = num;

   do{
        cout <<"\nOperação (+,-,*,/): ";
        cin >> operacao;

        if (operacao != '=')
        {
          cout <<"Digite um número: ";
          cin >> num;
          switch (operacao) {
              case '+':
                resultado += num;
                break;
              case '-':
                resultado -= num;
                break;
              case '*':
                resultado *= num;
                break;
              case '/':
                if (num == 0) {
                  cout <<"Divisão por zero é invalida";
                } else {
                    resultado /= num;
                 }
                  break;
              default:
                cout << "Operação inválida.";
                break;
         } 
       }
    }while (operacao != '=');
        cout << resultado; 
}
