#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int t;
    scanf("%d", &t);

    string s;
    int length, i;
    while (t--)
    {
        cin >> s;
        length = s.length();

        for (i = 0; i < length; i += 2)
        {
            cout << s[i];
        }
        cout << s[length - 1];
        printf("\n");
    }

    return 0;
}