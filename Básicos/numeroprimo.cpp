#include <iostream>
using namespace std;
int main ()
{
  int numero, cont, quantdiv = 0;
  cout <<"Digite um número: ";
  cin >> numero;
  for (cont =1; cont<=numero; cont++) 
  { if (numero%cont==0)
    { 
        quantdiv++;
    }
  } if (quantdiv == 2)
   {
     cout << "Ele é primo";
     
   } else {
    cout << "Ele não é primo";
  }
}