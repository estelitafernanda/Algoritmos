/*Numa disciplina são dadas duas provas e dois trabalhos, mas a média é calculada considerando-se apenas a maior nota de prova e a maior nota de trabalho. Elabore um algoritmo que, dadas as quatro notas de um aluno, informe a sua média. Para isso, utilize duas funções: uma que determine o maior valor entre as notas (de provas ou de trabalhos) e outra que calcule a média aritmética das duas maiores notas.*/
#include <iostream>
using namespace std;

float maiorNota (float n1, float n2);
float calcularMedia (float n1, float n2);
int main (){
  float pr1, pr2, tr1, tr2, maiorNotaProva, maiorNotaTrabalho; 

  cout <<"Digite as duas notas das provas: ";
  cin >> pr1 >> pr2;
  cout <<"Digite as duas notas dos trabalhos: ";
  cin >> tr1 >> tr2;

  maiorNotaProva = maiorNota(pr1, pr2);
  maiorNotaTrabalho = maiorNota(tr1, tr2);
  cout <<"Média = " << calcularMedia(maiorNotaProva, maiorNotaTrabalho);
}
float maiorNota (float n1, float n2){
     float maior;
     if (n1 > n2){
       maior = n1;
     }else {
       maior = n2;
     }
      return maior;
} 
float calcularMedia (float n1, float n2){
  return ((n1 + n2)/ 2);
}
      