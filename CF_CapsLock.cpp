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
    bool YES = true;

    if (islower(s[0]) > 0)
        first = 1;

    for (i = 1; i < length; ++i)
    {
        if (isupper(s[i]) > 0)
        {
            totCaps++;
        }
    }

    // case when capCount = len - 1 && first letter is small
    // eg: hELLO
    if ((totCaps == length - 1) && (first == 1))
    {
        s[0] = toupper(s[0]);
        for (i = 1; i < length; ++i)
            s[i] = tolower(s[i]);
        
        cout << s;
        return 0;
    }

    // case when capCount = len - 1 && first letter is cap
    // eg: HELLO
    if ((totCaps == length - 1) && (first == 0))
    {
        for (i = 1; i < length; ++i)
            s[i] = tolower(s[i]);

        cout << s;
        return 0;
    }

    cout << s;
    return 0;





    return 0;
}