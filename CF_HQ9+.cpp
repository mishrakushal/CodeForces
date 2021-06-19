#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int x = s.length();
    for (int i = 0; i < x; ++i)
    {
        if (s[i] == 'H' || s[i] == 'Q' || s[i] == '9' || s[i] == '+')
        {    
            {
                cout << "YES";
                return 0;
            }
        }

        else
        {    
            cout << "NO";
            return 0;
        }
    } 


}