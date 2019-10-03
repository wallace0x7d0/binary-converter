#include <iostream>
#include <cmath>
using namespace std;

class Binary{
	public:
		static string toBinary(int dec);
		static int toDecimal(string bin);

		
};

string Binary::toBinary(int dec){
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

int Binary::toDecimal(string bin){
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