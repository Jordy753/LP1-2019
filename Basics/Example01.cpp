#include <iostream>

using namespace std;

int main()
{
    ///////////////////01//////////////
    // Conversiones de tipos no seguras
    double d = 0;
    while (cin >> d){ // Repite las declaraciones de abajo
        // siempre que ingresems numeros
        int i = d; // intenta hacerlo entrar en un entero
        char c = i; // intenta hacerlo entrar en un char
        int i2 = c; // obtiene el valor de un char
        cout << "d==" << d // el valor double original
            << "_i=="   << i // convertido a int
            << "_i2=="  << i2 // valor entero del char
            << "_char(" <<  c   << ")\n"; // el char
    }
    double x = 2.7;
    int y = x; // y se convierte en 2
    int a = 1000;
    char b = a; // b se convierte en -24
    return 0;
}
