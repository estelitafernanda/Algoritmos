#include <iostream>
#include <string>
using namespace std;

struct tAnimal {
  string nome;
  string raca;
  int idade;
};

int main() {
  tAnimal Animal[2];
  int i, velho = 0;
  string RacaA;
  string buscar;
  bool encontra = false ;

  for (i = 0; i < 2; i++) {
    cout << "Digite o nome do animal: ";
    getline(cin, Animal[i].nome);
    cout << "Digite a raca do animal: ";
    getline(cin, Animal[i].raca);
    cout << "Digite a idade do animal: ";
    cin >> Animal[i].idade;
    getchar();

    if (Animal[i].idade > velho) {
        velho = Animal[i].idade;
    }
  }
  for (i = 0 ; i < 2 ; i++){
      if (Animal [i].idade == velho){
          cout << "Nome do animal mais velho : " << Animal[i].nome << endl;
          cout << "Idade : " << velho << endl; 
      }
  }
  char op;
  cout << "Deseja buscar os animais cadastrados (S - sim ou N - não): ";
  cin >> op;
  if (op == 'S' || op == 's') {
    cout << "Digite a raca do animal: ";
    cin.ignore();
    getline(cin, RacaA);
    for (i = 0; i < 2; i++) {
      if (Animal[i].raca == RacaA) {
        cout << "Nome: " << Animal[i].nome << endl;
        cout << "Idade: " << Animal[i].idade << endl;
        encontra = true;
      }
    }
    if (!encontra){
      cout <<"Raça não encontrada";
    }
  }
  else {
      cout <<"Cadastro finalizado!!\n";
  }
}