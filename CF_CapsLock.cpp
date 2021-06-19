#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s[110];
    gets(s);

    int length = strlen(s);
    int first = 0, totCaps = 0;
    register int i;

    for (i = 0; i < length; ++i)
        if (isupper(s[i]) > 0)
            totCaps++;

    if (totCaps == length)
    {
        for (i = 0; i < length; ++i)
        {
            if (islower(s[i]) > 0)
                s[i] = toupper(s[i]);
            else
                s[i] = tolower(s[i]);
        }
        
        cout << s;
        return 0;
    }

    if (totCaps == length - 1)
    {
        if (islower(s[0]) > 0)
        {
            for (i = 0; i < length; ++i)
            {
                if (islower(s[i]) > 0)
                    s[i] = toupper(s[i]);
                else
                    s[i] = tolower(s[i]);
            }
        
            cout << s;
            return 0;
        }
    }

    cout << s;

    return 0;
}