// Leia uma temperatura em graus Celsius e apresente-a convertida em graus Fahrenheit. A
// fórmula de conversão é F=(9*C+160)/5, sendo F a temperatura em Fahrenheit e C a temperatura
//  em Celsius.
 #include <iostream>
 using namespace std;

int main (){
  int C, F;
  
   cout <<"Qual é a sua temperatura em °C? ";
  cin >>C;
  
   F = (9*C + 160)/5;
  
  cout <<"A sua temperatura em °F será: " << F;
}