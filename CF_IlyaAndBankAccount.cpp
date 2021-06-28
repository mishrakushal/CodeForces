#include <iostream>
#include <algorithm>
using namespace std;
#define ll long long

int main()
{
    string s;
    cin >> s;

    int length = s.length(), i, first;

    if (s[0] != '-')
    {
        cout << s << endl;
        return 0;
    }
    else    // delete first non-zero digit from rhs of negative number
    {
        for (i = length - 1; i > 0; --i)
        {
            if (s[i] != '0')
            {
                first = i;
                break;
            }
        }
    }

    s.erase(remove(s.begin(), s.end(), s[first]), s.end());

    if (s.length() == 2)
        cout << 0;
    else
        cout << s << endl;

    return 0;
}