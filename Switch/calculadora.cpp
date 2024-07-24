#include <iostream>

using namespace std;

int main() {
    char operador;
    float num1, num2;

    do {
        cout << "Digite um operador (+, -, *, /) ou 'q' para sair: ";
        cin >> operador;

        if (operador == 'q') {
            break;
        }

        cout << "Digite dois numeros: ";
        cin >> num1 >> num2;

        switch (operador) {
            case '+':
                cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
                break;
            case '-':
                cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
                break;
            case '*':
                cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
                break;
            case '/':
                if (num2 == 0) {
                    cout << "Erro: divisao por zero!" << endl;
                } else {
                    cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
                }
                break;
            default:
                cout << "Operador invalido! Tente novamente." << endl;
        }

    } while (operador != 'q');

    return 0;
}
