#include <iostream>
#include <ctype.h>

using namespace std;

int main(int argc, char** argv) {
	const float dtoy = 110.82;
	const float dtoe = 0.89;
	const float dtol = 0.77;
	char type;
	float result, quantity;

	cout << "Ingrese el tipo de moneda: [Y(en), E(uro), L(ibra), D(olares)]" << endl;
	cin >> type;
	type = toupper(type);

	if (type != 'Y' and type != 'E' and type != 'L' and type != 'D'){
		cout << "Tipo incorrecto.";
		return 0;
	}

	cout << "Ingrese la cantidad: " << endl;
	cin >> quantity;

	if (type == 'Y'){
		result = quantity / dtoy;
	}
	if (type == 'E'){
		result = quantity / dtoe;
	}
	if (type == 'L'){
		result = quantity / dtol;
   	}
 	if (type == 'D'){
		cout << "Ingrese el tipo de moneda a convertir: [Y(en), E(uro), L(ibra)]" << endl;
		cin >> type;

		if (type == 'Y'){
			result = quantity * dtoy;
		}else if (type == 'E'){
			result = quantity * dtoe;
		}else if (type == 'L'){
			result = quantity * dtol;
		}else{
			cout << "Tipo incorrecto.";
			return 0;
		}
	}


	cout << quantity << type << " son " << result << " dolares."	;
	return 0;
}
