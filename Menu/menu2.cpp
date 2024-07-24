#include <iomanip>
#include <iostream>
using namespace std;

int main() {
  int op, matricula, aluno,
      alunoreprov = 0, alunoaprov = 0, turma = 0, turma1 = 0, idade, faixa1 = 0,
      faixa2 = 0, faixa3 = 0, faixa4 = 0, faixa5 = 0, parcela, menor = 10,
      maior = 0;
  float preco_carro, preco_vista, valor_parcela, nota1, nota2, nota3, media;
  do {
    cout << "\nMenu principal";
    cout << "\n1- Faixa etária";
    cout << "\n2- Tabela de carro";
    cout << "\n3- Notas";
    cout << "\n4- Tabela de desconto da Loja ";
    cout << "\n5- Número primos";
    cout << "\n6- Sair";
    cout << "\nEscolha a opção desejada: ";
    cin >> op;
    switch (op) {
    case 1:
      for (int i = 0; i < 15; i++) {
        cout << "Digite a idade da pessoa " << i + 1 << ": ";
        cin >> idade;

        if (idade <= 15) {
          faixa1++;
        } else if (idade <= 30) {
          faixa2++;
        } else if (idade <= 45) {
          faixa3++;
        } else if (idade <= 60) {
          faixa4++;
        } else {
          faixa5++;
        }
      }
      cout << "\nFaixa etária de até 15 anos: " << faixa1 << " pessoa(s)\n";
      cout << "Faixa etária de 16 a 30 anos: " << faixa2 << " pessoa(s)\n";
      cout << "Faixa etária de 31 a 45 anos: " << faixa3 << " pessoa(s)\n";
      cout << "Faixa etária de 46 a 60 anos: " << faixa4 << " pessoa(s)\n";
      cout << "Faixa etária acima de 61 anos: " << faixa5 << " pessoa(s)\n";
      break;
    case 2:
      cout << "Digite o preco do carro: ";
      cin >> preco_carro;

      // Calcula o preco a vista com desconto de 20%
      preco_vista = preco_carro * 0.8;

      cout << fixed << setprecision(2);

      // Mostra o preco a vista e a tabela de parcelamento
      cout << "Preco a vista: R$ " << preco_vista << endl;
      cout << "Tabela de parcelamento:" << endl;

      for (parcela = 6; parcela <= 60; parcela += 6) {
        // Calcula o valor da parcela com acréscimo
        switch (parcela) {
        case 6:
          valor_parcela = preco_carro * 1.03 / parcela;
          break;
        case 12:
          valor_parcela = preco_carro * 1.06 / parcela;
          break;
        case 18:
          valor_parcela = preco_carro * 1.09 / parcela;
          break;
        case 24:
          valor_parcela = preco_carro * 1.12 / parcela;
          break;
        case 30:
          valor_parcela = preco_carro * 1.15 / parcela;
          break;
        case 36:
          valor_parcela = preco_carro * 1.18 / parcela;
          break;
        case 42:
          valor_parcela = preco_carro * 1.21 / parcela;
          break;
        case 48:
          valor_parcela = preco_carro * 1.24 / parcela;
          break;
        case 54:
          valor_parcela = preco_carro * 1.27 / parcela;
          break;
        case 60:
          valor_parcela = preco_carro * 1.30 / parcela;
          break;
        }

        // Mostra a quantidade de parcelas e o valor de cada parcela
        cout << parcela << "x de R$ " << valor_parcela;
      }
      break;
    case 3:
      for (aluno = 0; aluno < 10; aluno++) {
        cout << "\nDigite sua matrícula: ";
        cin >> matricula;
        cout << "\nDigite suas 3 notas: ";
        cin >> nota1 >> nota2 >> nota3;
        media = (nota1 + nota2 + nota3) / 3;
        if (media >= 6) {
          cout << "Sua media foi = " << media << "Você foi aprovado";
          alunoaprov++;
        } else {
          cout << "Sua media foi =" << media << "Você foi reprovado";
          alunoreprov++;
        }
        if (media < menor) {
          menor = media;
          turma = matricula;
        }
        if (media > maior) {
          maior = media;
          turma1 = matricula;
        }
        cout << "\nAlunos aprovados: " << alunoaprov;
        cout << "\nAlunos reprovados: " << alunoreprov;
      }
      cout << "\nMatrícula: " << turma1 << "\nAluno com maior nota: " << maior;
      cout << "\nMatrícula: " << turma << "\nAluno com menor nota: " << menor << endl;
      break;
    case 4:
      cout <<"Digite o valor da sua compra: ";
      break;
    case 5:
      cout << "itemE";
      break;
    case 6:
      cout << "Fim de programa";
      break;
    default:
      cout << "número invalido";
    }
  } while (op != 6);
}
