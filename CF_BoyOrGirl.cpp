#include <iostream>
using namespace std;

int main()
{
    string s;
    int distinct = 0, match = 0;
    cin >> s;

    int length = s.length();
    for (int i = 0; i < length; ++i)
    {
        for (int j = i + 1; j < length; ++j)
        {
            if (s[i] == s[j])
                match++;
        }

        if (match == 0)
            distinct++;
        match = 0;
    }

    if (distinct % 2 == 0)
        cout << "CHAT WITH HER!" << endl;
    else
        cout << "IGNORE HIM!" << endl;

    return 0;
}