#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    string data;
    cin >> data;

    int numUpper = 0, numLower = 0;
    for (int i = 0; i < data.length(); i++)
    {
        if (isupper(data[i]) == 0)
        {
            numLower++;
        }
        else
        {
            numUpper++;
        }
    }

    if (numUpper > numLower)
    {
        for (int i = 0; i < data.length(); i++)
        {
            data[i] = toupper(data[i]);
        }
    }
    else
    {
        for (int i = 0; i < data.length(); i++)
        {
            data[i] = tolower(data[i]);
        }
    }

    cout << data;

    return 0;
}