#include <iostream>
using namespace std;
int main()
{
    char type;
    cin >> type;

    if (type >= 65 && type <= 90)
    {
        cout << "ALPHA" << endl;
        cout << "IS CAPITAL" << endl;
    }

    else if (type >= 97 && type <= 122)
    {
        cout << "ALPHA" << endl;
        cout << "IS SMALL" << endl;
    }
    else
    {
        cout << "IS DIGIT" << endl;
    }
}