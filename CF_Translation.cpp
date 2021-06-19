#include <iostream>
#include <string>
using namespace std;

int main()
{
    string forward, reverse;
    cin >> forward;
    cin >> reverse;

    for (int i = 0; i < forward.length(); i++)
    {
        if (forward[i] != reverse[reverse.length() - i - 1])
        {
            cout << "NO";
            return 0;
        }
    }

    cout << "YES";
    return 0;
}