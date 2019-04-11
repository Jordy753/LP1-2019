#include <iostream>
using namespace std;

int main()
{
    for(int i = 97; i < 123; i++)
    {
        cout << i << '\t' << char(i) << endl;
    }
    for(int i = 65; i < 91; i++)
    {
        cout << i << '\t' << char(i) << endl;
    }
    for(int i = 48; i < 58; i++)
    {
        cout << i << '\t' << char(i) << endl;
    }
    return 0;
}
