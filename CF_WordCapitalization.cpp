#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
    string data;
    cin >> data;

    if (isupper(data[0]) != 1)
    {
        data[0] = toupper(data[0]);
        cout << data;
    }
    else
    {
        cout << data;
    }
    
    return 0;
}