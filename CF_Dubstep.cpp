#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int length = s.length(), i, flag = 1;

    for (i = 0; i < length; ++i)
    {   
        if ((s[i] == 'W') && (s[i + 1] == 'U') && (s[i + 2] == 'B'))
        {
            i += 2;

            if (!flag)
            {
                cout << " ";
            }
            
            continue;
        }
        else
        {
            flag = 0;
            cout << s[i];
        }
    }

    return 0;
}