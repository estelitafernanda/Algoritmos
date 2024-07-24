/*Crie um algoritmo para manipular vetores. O seu programa deve implementar 
uma função chamada inverteVetor, que recebe como parâmetro dois vetores V1 e V2, 
ambos de tamanho N. A função deve copiar os elementos de V1 para V2 na ordem 
inversa. Ou seja, se a função receber V1 = {1,2,3,4,5}, a função deve copiar os elementos 
para V2 na seguinte ordem: V2 = {5,4,3,2,1}. Além disso, a função também deve retornar 
o maior valor encontrado em V1. A função deve possuir a seguinte assinatura: int 
inverteVetor(int *v1, int *v2, int n); Elabore um teste da função no main.*/
#include <iostream>
using namespace std;
int inverteVetor (int *v1, int *v2, int n);
int main (){
  int i, n = 0, maior; 
  cout <<"Qual é o tamanho do seu vetor? ";
  cin >> n;
  int v1 [n], v2 [n];
  for (i = 0; i < n; i++){
    cout <<"Digite os valores de um vetor: ";
    cin >> v1 [i]; 
  }
  maior = inverteVetor (v1, v2, n);
  for (i = 0; i < n; i++){
    cout << v2 [i] << " ";
  }
  cout <<"\nMaior: " << maior;
}
int inverteVetor (int *v1, int *v2, int n){
  int j, maior = v1[0];
  for (j = 0; j < n; j++){
    v2 [j] = v1[n-1-j]; 
    if (v1[j] > maior){
      maior = v1 [j];
    }
  }
  return maior;
}