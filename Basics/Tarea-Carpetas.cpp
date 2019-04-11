#include <iostream>
using namespace std;

int isCorrect(var){
    if(var <= 0){
        cout << "ERROR";
        return 0;
    }else{
        return 1;
    }
}

int main(){
    int f, c;

	cout << "Cantidad de filas: ";
	cin >> f;
	
	cout << "Cantidad de columnas: ";
    cin >> c;
    
    if(isCorrect(f) && isCorrect(c)){
        if((f * c) % 2 == 0){
        cout << "Es posible.";
        }else{
            cout << "No es posible";
        }
    }
    
	return 0;
}
