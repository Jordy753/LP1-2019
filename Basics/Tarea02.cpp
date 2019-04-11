#include <iostream>
#include <ctype.h>

using namespace std;

int main(int argc, char** argv) {
	const float dtoy = 110.82;
	const float dtoe = 0.89;
	const float dtol = 0.77;
	const float dtoyu = 6.72;
	const float dtoys = 3.58;
	char type;
	float result, quantity;

	cout << "Ingrese el tipo de moneda: [Y(en), E(uro), L(ibra), Y(U)an, S(hekels), D(olares)]" << endl;
	cin >> type;
	type = toupper(type);

	if (type != 'Y' and type != 'E' and type != 'L' and type != 'D' and type != 'U' and type != 'S'){
		cout << "Tipo incorrecto.";
		return 0;
	}

	cout << "Ingrese la cantidad: " << endl;
	cin >> quantity;


    switch(type){
        case 'Y':
            result = quantity / dtoy;
            break;
        case 'E':
            result = quantity / dtoe;
            break;
        case 'L':
            result = quantity / dtol;
            break;
        case 'U':
            result = quantity / dtoyu;
            break;
        case 'S':
            result = quantity / dtoys;
            break;
        case 'D':
                cout << "Ingrese el tipo de moneda a convertir: [Y(en), E(uro), L(ibra), y(U)an, S(hekels)]" << endl;
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

                switch(type){
                    case 'Y':
                        result = quantity * dtoy;
                        break;
                    case 'E':
                        result = quantity * dtoe;
                        break;
                    case 'L':
                        result = quantity * dtol;
                        break;
                    case 'Yu':
                        result = quantity * dtoyu;
                        break;
                    case 'S':
                        result = quantity * dtoys;
                        break;
                    default:
                        cout << "Tipo incorrecto.";
                        return 0;

                        break;
                }
            break;
        default:
            cout << "Tipo incorrecto.";
			return 0;

			break;
    }

	cout << quantity << type << " son " << result << " dolares."	;
	return 0;
}
