#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<string> notLike;
    string word;
    bool found = false;

    notLike.push_back("Fuck");

    cout << "Ingresa una palabra: ";
    cin >> word;

    for(int i = 0; i < notLike.size(); i++) {
        if(notLike[i] == word) {
            found = true;
            break;
        }
    }
    if(found) {
        cout << "Piiii";
    }else{
        cout << word;
    }
    return 0;
}
