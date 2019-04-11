#include <iostream>
using namespace std;

int square(int n)
{
    int result = 0;
    for (int i = 1; i <= n; i++)
    {
        result += n;
    }
    return result;
}

int main()
{
    int i = 0;
    while(i < 100)
    {
        cout << i << '\t' << square(i) << endl;
        i++;
    }
    return 0;
}
