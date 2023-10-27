#include <iostream>
#include <string>
using namespace std;

struct registra 
{
    int matricula; // chave
    string nome;
    string rua;
    string bairro;
    string cidade;
    string estado;
    string dataNasc;
    int idade;
    string nomePai;
    string nomeMae;
};

int main() 
{
    registra aluno[20];
    int menuOp, i, j, cont, op , matri , posi = 0;
    string nomes;
    char opSecundaria;
    bool encontrado = false;

    do 
    {
        cout << "-------------------------------------\n";
        cout << "|\t  MENU PRINCIPAL            |\n";
        cout << "-------------------------------------\n";
        cout << "| 1 - MATRICULA ALUNO               |\n";
        cout << "| 2 - BUSCAR MATRICULA              |\n";
        cout << "| 3 - ALTERAR MATRICULA             |\n"; // parei aq
        cout << "| 4 - EXCLUIR MATRICULA             |\n";
        cout << "| 5 - LISTAR DE ALUNOS MATRICULADOS |\n";
        cout << "| 6 - SAIR DO SISTEMA               |\n";
        cout << "-------------------------------------\n";
        cout << "Digite a opcao desejada : ";
        cin >> menuOp;

        switch (menuOp) 
        {
            case 1:
                cout << "Digite a quantidade de alunos que voce quer matricula : ";
                cin >> cont;

                for (i = 0; i < cont; i++) {
                    cout << "Matricula : ";
                    cin >> aluno[i].matricula;
                    cin.ignore();
                    cout << "Nome : ";
                    getline(cin, aluno[i].nome);
                    cout << "Rua : ";
                    getline(cin, aluno[i].rua);
                    cout << "Bairro : ";
                    getline(cin, aluno[i].bairro);
                    cout << "Cidade : ";
                    getline(cin, aluno[i].cidade);
                    cout << "Estado : ";
                    getline(cin, aluno[i].estado);
                    cout << "Data de Nascimento : ";
                    getline(cin, aluno[i].dataNasc);
                    cout << "Idade : ";
                    cin >> aluno[i].idade;
                    cin.ignore();
                    cout << "Nome do Pai : ";
                    getline(cin, aluno[i].nomePai);
                    cout << "Nome do Mae : ";
                    getline(cin, aluno[i].nomeMae);
                    cout << endl;

                    for (j = 0; j < i; j++) {
                        while (aluno[i].matricula == aluno[j].matricula) 
                        {
                            cout << "Esse numero de matricula ja foi registrado !!";
                            cout << "Digite outr numero para essa matricula : ";
                            cin >> aluno[i].matricula;
                        }
                    }

                    if (i == cont) {
                        break;
                    }
                }
                break;
            case 2:
                do 
                {
                    cout << "-----------------------------------\n";
                    cout << "|\t      BUSCAR              |\n";
                    cout << "|---------------------------------|\n";
                    cout << "| 1 - MATRICULA DO ALUNO          |\n";
                    cout << "| 2 - NOME DO ALUNO               |\n";
                    cout << "| 3 - NOME DO PAI                 |\n";
                    cout << "| 4 - NOME DA MAE                 |\n";
                    cout << "|---------------------------------|\n";
                    cout << "Digite a opcao desejada : ";
                    cin >> op;

                    if (op == 1) 
                    {
                        cout << "Digite a matricula do aluno : ";
                        cin >> matri;

                        encontrado = false;
                        for (i = 0; i < cont; i++) 
                        {
                            if (aluno[i].matricula == matri) 
                            {
                                cout << "Aluno encontrado:" << endl;
                                cout << "Nome: " << aluno[i].nome << endl;
                                cout << "Rua: " << aluno[i].rua << endl;
                                cout << "Bairro: " << aluno[i].bairro << endl;
                                cout << "Cidade: " << aluno[i].cidade << endl;
                                cout << "Estado: " << aluno[i].estado << endl;
                                cout << "Data de Nascimento: " << aluno[i].dataNasc << endl;
                                cout << "Idade: " << aluno[i].idade << endl;
                                cout << "Nome do Pai: " << aluno[i].nomePai << endl;
                                cout << "Nome da Mae: " << aluno[i].nomeMae << endl;
                                encontrado = true;
                            }
                        }
                        if (!encontrado) 
                        {
                            cout << "Matricula nao encontrada!" << endl;
                        }
                    }


                    if (op == 2 || op == 3 || op == 4) 
                    {
                        cout << "Digite o nome : " << endl;
                        cin >> nomes;

                        encontrado = false;
                        for (i = 0; i < cont; i++) 
                        {
                            if (aluno[i].nome == nomes || aluno[i].nomePai == nomes || aluno[i].nomeMae == nomes) 
                            {
                                cout << "Aluno encontrado:" << endl;
                                cout << "Nome: " << aluno[i].nome << endl;
                                cout << "Rua: " << aluno[i].rua << endl;
                                cout << "Bairro: " << aluno[i].bairro << endl;
                                cout << "Cidade: " << aluno[i].cidade << endl;
                                cout << "Estado: " << aluno[i].estado << endl;
                                cout << "Data de Nascimento: " << aluno[i].dataNasc << endl;
                                cout << "Idade: " << aluno[i].idade << endl;
                                cout << "Nome do Pai: " << aluno[i].nomePai << endl;
                                cout << "Nome da Mae: " << aluno[i].nomeMae << endl;
                                encontrado = true;
                            }
                        }
                        if (!encontrado) 
                        {
                            cout << "Nome nao encontrado!" << endl;
                        }
                    }
                    cout << "\nDeseja fazer mais alguma busca (S - sim ou N - nao) : ";
                    cin >> opSecundaria;
                } while (opSecundaria == 'S' || opSecundaria == 's');
                break;
            case 3 :
                do
                {
                    cout << "Digite a matricula do aluno : ";
                    cin >> matri;

                    encontrado = false;
                    for (i = 0; i < cont; i++) 
                    {
                        if (aluno[i].matricula == matri) 
                        {
                            cout << "-------------------------------------\n";
                            cout << "|\t      ALTERAR               |\n";
                            cout << "-------------------------------------\n";
                            cout << "| 1 - NOME DO ALUNO                 |\n";
                            cout << "| 2 - RUA                           |\n"; 
                            cout << "| 3 - BAIRRO                        |\n";
                            cout << "| 4 - CIDADE                        |\n";
                            cout << "| 5 - ESTADO                        |\n";
                            cout << "| 6 - DATA DE NASCIMENTO            |\n";
                            cout << "| 7 - IDADE                         |\n";
                            cout << "| 8 - NOME DO PAI                   |\n";
                            cout << "| 9 - NOME DA MAE                   |\n"; 
                            cout << "-------------------------------------\n";
                            cout << "Digite a opcao desejada : ";
                            cin >> op;

                            if (op == 1)
                            {
                                aluno[i].nome.clear();
                                cout << "Digite a Alteracao : ";
                                getchar();
                                getline (cin , aluno[i].nome);
                                encontrado = true;
                            }
                            if (op == 2)
                            {
                                aluno[i].rua.clear();
                                cout << "Digite a Alteracao : ";
                                getchar();
                                getline (cin , aluno[i].rua);
                                encontrado = true;
                            }
                            if (op == 3)
                            {
                                aluno[i].bairro.clear();
                                cout << "Digite a Alteracao : ";
                                getchar();
                                getline (cin , aluno[i].bairro);
                                encontrado = true;
                            }
                            if (op == 4)
                            {
                                aluno[i].cidade.clear();
                                cout << "Digite a Alteracao : ";
                                getchar();
                                getline (cin , aluno[i].cidade);
                                encontrado = true;
                              } 
                            if (op == 5)
                            {
                                aluno[i].estado.clear();
                                cout << "Digite a Alteracao : ";
                                getchar();
                                getline (cin , aluno[i].estado);
                                encontrado = true;
                            } 
                            if (op == 6)
                            {
                                aluno[i].dataNasc.clear();
                                cout << "Digite a Alteracao : ";
                                getchar();
                                getline (cin , aluno[i].dataNasc);
                                encontrado = true;
                            } 
                            if (op == 7)
                            {
                                cout << "Digite a Alteracao : ";
                                cin >> aluno[i].idade ;
                                encontrado = true;
                            }
                            if (op == 8)
                            {
                                aluno[i].nomePai.clear();
                                cout << "Digite a Alteracao : ";
                                getchar();
                                getline (cin , aluno[i].nomePai);
                                encontrado = true;
                            } 
                            if (op == 9)
                            {
                                aluno[i].nomeMae.clear();
                                cout << "Digite a Alteracao : ";
                                getchar();
                                getline (cin , aluno[i].nomeMae);
                                encontrado = true;
                            }                                                                                   
                        }
                    }
                    if (!encontrado) 
                    {
                        cout << "Matricula nao encontrada!" << endl;
                    }
                    cout << "\nDeseja fazer mais alguma alteracao (S - sim ou N - nao) : ";
                    cin >> opSecundaria;

                } while (opSecundaria == 'S' || opSecundaria == 's');
                break;
            case 4 :
                do
                {
                    cout << "Digite a Matricula do Aluno : ";
                    cin >> matri ;
                    for (i = 0 ; i < cont ; i++)
                    {
                        if (aluno[i].matricula == matri)
                        {
                            posi = i;
                            encontrado = true ;
                            break;
                        }
                    }
                    if (encontrado) 
                    {
                        for (i = posi; i < cont - 1; i++) 
                        {
                            aluno[i] = aluno[i + 1];
                        }
                            cont --;

                            cout << "Matricula excluida com sucesso!" << endl;
                    } else 
                        {
                            cout << "Matricula nao encontrada !!";
                        }

                    cout << "\nDeseja Excluir mais alguma matricula (S - sim ou N - nao) : ";
                    cin >> opSecundaria;

                } while (opSecundaria == 'S' || opSecundaria == 's');
                break ;
            case 5 :
            do 
            {
                for (i = 0 ; i < cont ; i++)
                {
                    cout << "-------------------------------------\n";
                    cout << "|              ALUNO                |\n";
                    cout << "-------------------------------------\n";
                    cout << " NOME : " << aluno[i].nome    << endl ;
                    cout << " MATRICULA :" << aluno[i].matricula  << endl ;                       
                    cout << " DATA DE NASCIMENTO : " << aluno[i].dataNasc << endl ; 
                    cout << " IDADE : " << aluno[i].idade << endl ;
                    cout << " NOME DO PAI : " << aluno[i].nomePai << endl ;
                    cout << " NOME DA MAE : " << aluno[i].nomeMae << endl ;
                    cout << " RUA : " << aluno[i].rua << endl ; 
                    cout << " BAIRRO : " << aluno[i].bairro << endl ;
                    cout << " CIDADE : " << aluno[i].cidade << endl ;
                    cout << " ESTADO : " << aluno[i].estado << endl ;
                }
                cout << "\nDeseja Voltar ao menu principal (S - sim ou N - nao) : ";
                cin >> opSecundaria;
            } while (opSecundaria == 'N' || opSecundaria == 'n');
                break;
        }
    } while (menuOp != 6);

    cout << "Fim de Programa !!" << endl;
}