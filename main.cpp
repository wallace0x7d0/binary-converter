#include <iostream>
#include "binary.h"

using namespace std;

int main(){

	while(true){

		cout << "=========================================================" << endl;
    	cout << "=                                                       =" << endl;
    	cout << "=                   Binary Calculator                   =" << endl;
    	cout << "=                                                       =" << endl;
    	cout << "=========================================================" << endl << endl;

		int c;
		int dec;
		string bin;

		cout << "ESCOLHA UMA OPÇÃO ABAIXO: " << endl << endl;
		cout << "1 - Binário para decimal"   << endl;
		cout << "2 - Decimal para binário"   << endl << endl;
		cout << "> ";
		cin >> c;


		switch(c){
			case 1:
				
				cout << endl << "Digite o binário: ";
				cin >> bin;

				cout << "Resultado: " << Binary::toDecimal(bin) << endl;

				break;
			case 2:

				cout << endl << "Digite o decimal: ";
				cin >> dec;

				cout << "Resultado: " << Binary::toBinary(dec) << endl;
				
				break;
			default:
				cout << "Opção inválida!" << endl;
		}

		return false;
	}

	return 0;
}