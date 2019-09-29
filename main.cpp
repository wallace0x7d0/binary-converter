#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

int binToDec(string bin);
string decToBin(int dec);

int main(){

	while(true){

		int c;
		int dec;
		string bin;

		cout << "ESCOLHA UMA OPÇÃO ABAIXO: " << endl << endl;
		cout << "1 - Binário para decimal" << endl;
		cout << "2 - Decimal para binário" << endl << endl;
		cout << ">";
		cin >> c;


		switch(c){
			case 1:
				
				cout << "Digite o binário: ";
				cin >> bin;

				cout << "Resultado: " << binToDec(bin) << endl;

				break;
			case 2:

				cout << "Digite o decimal: ";
				cin >> dec;

				cout << "Resultado: " << decToBin(dec) << endl;
				
				break;
			default:
				cout << "Opção inválida!" << endl;
		}

		return false;
	}

	return 0;
}

int binToDec(string bin){

	int dec = 0;
	string rbin;


	for (int i = bin.size() -1; i >= 0; i--){
		rbin += bin[i];
	}

	for (int i = 0; i < rbin.size(); ++i){
		if(rbin[i] == '1'){
			dec += pow(2, i);
		}
	}

	return dec;
}

string decToBin(int dec){

	string rbin;
	string bin;

	while(dec >= 1){
		if((dec % 2) == 1){
			rbin += '1';
		}else if((dec % 2) == 0){
			rbin += '0';
		}

		dec /= 2;
	}

	for (int i = rbin.size() - 1; i >= 0; i--){
		bin += rbin[i];
	}

	return bin;
}
