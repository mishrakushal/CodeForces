#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s, compare = "hello";
    cin >> s;

    int length = s.length();
    int count = 0, j = 0;  // max count = h e l l o == 5

    for (int i = 0; i < length; ++i)
    {
        if (s[i] == compare[j])
            j++;
    }

    if (j == 5)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}