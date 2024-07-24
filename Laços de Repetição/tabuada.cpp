#include<iostream>
#include<math.h>
using namespace std;

int main(){
	//LER TABUADA
	//LER NUMERO DE ESCOLHA
	//CRIAR TABUADA
	//MOSTRAR RESULTADOS DAS TABUADAS

	int numero, cont;
	
	cout << "Digite um numero para criar a tabuada: ";
	cin >> numero;
	
	cout << numero << "X" << "1: " << numero*1 << endl;
	cout << numero << "X" << "2: " << numero*2 << endl;	
	cout << numero << "X" << "3: " << numero*3 << endl;
	cout << numero << "X" << "4: " << numero*4 << endl;
	cout << numero << "X" << "5: " << numero*5 << endl;
	cout << numero << "X" << "6: " << numero*6 << endl;
	cout << numero << "X" << "7: " << numero*7 << endl;
	cout << numero << "X" << "8: " << numero*8 << endl;
	cout << numero << "X" << "9: " << numero*9 << endl;
	cout << numero << "X" << "10: " << numero*10 << endl;
	
	// utilizando laços de repetição (contagem)
	for(cont=1;cont<=10;cont++){
		cout << "\n\t" << numero << " X " << cont << " : " << numero*cont << endl;
	}
	
	cout << "\n\tFim\n";
	system("Pause");
}