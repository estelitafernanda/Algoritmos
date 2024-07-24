/*O cardápio de uma lanchonete é o seguinte:

         Sanduíches
Código    Descrição       Preço Unitário
100     Cachorro quente        1,10
101     Baurú simples          1,30
102     Baurú com ovo          1,50
103      Hamburger             1,10
104     Cheesburger            1,30
  
          Bebida
Código   Descrição   Preço Unitário
105    Refrigerante      1,00
106       Suco           2,00
107      Nescau          1,50
  
Escreva um algoritmo que leia o código dos itens pedidos (um sanduiche e uma bebida) e a quantidade
de cada um e calcule o valor a ser pago por aquele lanche.*/

#include <iostream>
using namespace std;

int main()
{
  int codigo1, codigo2, quantidade1, quantidade2;

  cout << "            CARDÁPIO\n\n";
  cout << "           Sanduíches\n\n";
  cout << "Código      Descrição      Preço Unitário\n";
  cout << "\n100       Cachorro quente      1,10";
  cout << "\n101       Bauru simples        1,30";
  cout << "\n102       Bauru com ovo        1,50";
  cout << "\n103       Hamburguer           1,10";
  cout << "\n104       Cheesburger          1,30\n\n";
  
  cout << "Digite o código do seu sanduíche: ";
  cin >> codigo1;
  
  cout << "\nQual será a quantidade? ";
  cin >> quantidade1;
  
  cout << "            Bebidas\n\n";
  cout << "Código      Descrição      Preço Unitário\n";
  cout << "\n105       Refrigerante         1,00";
  cout << "\n106          Suco              2,00";
  cout << "\n107         Nescau             1,50\n";

  cout << "\nDigite o código da sua bebida: ";
  cin >> codigo2;
  cout << "\nQual será a quantidade? ";
  cin >> quantidade2;

  float cachorroquente, baurusimples, bauruovo, hamburger, cheesburger;

  switch (codigo1)
  {
    case 100:
    cachorroquente = quantidade1 * 1.10;
    cout << "\nCachorro quente " << quantidade1 << " x " << " 1,10" << " = " << cachorroquente;
      break;
    case 101:
    baurusimples = quantidade1 * 1.30;
    cout << "\nBauru simples " << quantidade1 << " x " << " 1,30 " << " = " << baurusimples;
      break;
    case 102:
    bauruovo = quantidade1 * 1.50;
    cout << "\nBauru com ovo " << quantidade1 << " x " << " 1,50 " << " = " << bauruovo;
      break;
    case 103:
    hamburger = quantidade1 * 1.10;
    cout << "\nHamburger " << quantidade1 << " x " << " 1,10" << " = " << hamburger;
      break;
    cheesburger = quantidade1 * 1.30;
    case 104:
    cout << "\nCheesburger " << quantidade1 << " x " << " 1,30 " << " = " << cheesburger;
      break;
    default:
    cout <<"códido inválido";
  }
  
  float refrigerante, suco, nescau;
  
  switch (codigo2)
  {
    case 105: 
    refrigerante = quantidade2 * 1.00;
    cout << " \nRefrigerante " << quantidade2 << " x " << "1,00 " << " = " << refrigerante;
      break;
    case 106:
    suco = quantidade2 * 2.00;
    cout << " \nSuco " << quantidade2 << " x " << "2,00 " << " = " << suco;
      break;
    case 107: 
    nescau = quantidade2 * 1.50;
    cout << " \nNescau " << quantidade2 << " x " << "1,50 " << " = " << nescau ;
      break;
    default:
    cout << "Código inválido";
  }
}