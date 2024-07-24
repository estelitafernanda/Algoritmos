/*Elabore um algoritmo que apresente o menu abaixo e, de acordo com a opção 
escolhida pelo usuário, realize a respectiva operação conforme detalhamento. 
---------------------------
 MENU PRINCIPAL 
---------------------------
1 - ORDEM 
2 - DATA 
3 - SALÁRIO 
4 - MULTA 
5 - CALCULAR 
6 - SAIR 
--------------------------
Opção 1: leia três valores inteiros e um char (‘c’ – crescente, ‘d’ – decrescente), passe - os para uma função que deverá ordená-los de acordo com a ordem escolhida e retorná-los para o chamador, que deverá escrever o resultado da ordenação. 

Opção 2: Declare o registro Data contendo 3 campos inteiros, dia, mês e ano, e leia 5 datas em um vetor de datas. Passe o vetor lido para uma função que que deverá verificar e retornar um vetor booleano contendo true em cada posição cuja data for válida e false em cada posição que a tada não for válida. Considerar meses de 30 e 31, desconsiderar anos bissextos. O chamador, após receber o resultado da função, deverá escrever uma mensagem de “Data Válida” ou “Data Válida” para cada resultado recebido no vetor. 
Exemplo: Vetor de Datas: 21/1/2000, 31/12/2012, 45/3/2000, 1/40/2000, 31/02/1999 
Saída da função: true, true, false, false, false 

Opção 3: leia o salário de uma pessoa e a sua quantidade de filhos e mande-os para uma função. A função deverá retornar quanto do salário da pessoa será dedicado a cada um dos seus filhos (considerando 10% para cada filho, desde que não exceda o 50% do valor total do salário. Se exceder, o valor para cada filho deverá ser 50% do salário dividido pelo total de filhos. O chamador deverá informar o valor do salário por filho ou, se a 
pessoa não tiver filhos, a mensagem “O seu salário é 100% para o seu próprio custeio”.
  
Opção 4: leia a velocidade máxima permitida em uma avenida e a velocidade com que o motorista estava dirigindo nela, envie-os para uma função void que deverá calcular se a pessoa vai pagar multa e, se for, qual o valor da multa. Considere que serão pagos como multa: a) 50 reais se o motorista ultrapassar em até 10km/h a velocidade permitida (ex.: velocidade máxima: 50km/h; motorista a 60km/h ou a 56km/h); b) 100 reais, se o motorista ultrapassar de 11 a 30 km/h a velocidade permitida. c) 200 reais, se estiver acima de 31km/h da velocidade permitida. A mensagem informando o valor da multa deverá ser escrita pelo chamador após a execução da função. 

Opção 5: leia o gabarito correto de uma prova e o gabarito de um aluno em uma matriz 2x10 (10 respostas do gabarito na primeira linha da matriz e 10 repostas do aluno na segunda linha da matriz) e envie para uma função. A função deverá calcular e retornar o percentual de acerto do aluno na prova (int) e a sua nota (float), considerando que cada questão vale 1,5 ponto. Escreva os resultados retornados pela função. 

Opção 6: Escreva a mensagem “Fim de Programa” e encerre o algoritmo.*/

#include <iostream>
#include <string>
using namespace std;

void multa (int velocidadeA, int velocidadeM);
int gabarito (int m[][5], int *aluno, float *nota);

int main (){
int op;

 do {
   cout <<"\n-----------------";
   cout <<"\n      MENU";
   cout <<"\n-----------------";
   cout <<"\n1 - ORDEM";
   cout <<"\n2 - DATA";
   cout <<"\n3 - SALARIO";
   cout <<"\n4 - MULTA";
   cout <<"\n5 - CALCULAR";
   cout <<"\n6 - SAIR";
   cout <<"\n-----------------";
   cout <<"\nQual opção você quer? ";
   cin >> op;

   switch (op){
     case 1:
       int n1, n2, n3;
       char ordem;
       cout << "Digite 3 números: ";
       cin >> n1 >> n2 >> n3;
       cout <<"Digite 'c' para crescente ou 'd' para descrecente: ";
       cin >> ordem; 

      cout <<"Numeros ordenados: " << n1 << n2 << n3;
       return 0;
     break;
     case 2:
     break;
     case 3:
     break;
     case 4:
       int velocidadeA, velocidadeM; 
       cout <<"Velocidade de uma avenida: ";
       cin >> velocidadeA;
       cout <<"Qual a velocidade do motorista? ";
       cin >> velocidadeM;
       multa (velocidadeA, velocidadeM);
     break;
     case 5: 
       int m [2][5]; 
       float nota;
       int i, j, acertoTotal, aluno;

       for (i = 0; i < 2; i++){
         for (j = 0; j < 5; j++){
           cout <<"Gabarito e a prova do aluno: ";
           cin >> m [i][j];
         }
       }
       acertoTotal = gabarito (m, &aluno, &nota);
       cout <<"\nAcertos: " << aluno; 
       cout <<"\nNota do aluno: " << nota;
     break;
     case 6:
     break;
  }
 }while (op != 6);
  
}
void multa (int velocidadeA, int velocidadeM){
  int multa;
  multa = velocidadeM - velocidadeA;
  if (multa <= 10){
    cout <<"Sua multa é de R$ 50,00 ";
  } else if (multa <= 30){
      cout <<"Sua multa é de R$ 100,00";
  } else if (multa > 30) {
    cout << "Sua multa é de R$ 200,00";
  }
}
int gabarito (int m [][5], int *aluno, float *nota){
  int i, j;
  int resultado = 0;
  *nota = 0.0;
  for (i = 0; i < 2; i++){
    for (j = 0; j < 5; j++){
      if (m [i][j] == m [i+1][j]){
          resultado++;
     }
    }
    *aluno = resultado;
    *nota = *aluno * 1.5;
  }
  return 0;
}
  