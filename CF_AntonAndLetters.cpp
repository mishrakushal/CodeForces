#include <iostream>
#include <cstring>
using namespace std;

const int CHARS = 26;
int main()
{
    char str[1000];
    gets(str);

    int length = strlen(str);
    int chars [CHARS] = {0};
    int distinct = 0;

    for (int i = 0; i < length; ++i)
    {
        if ((str[i] >= 97) && (str[i] <= 122))
            chars [str[i] - 'a']++;
    }

    for (int i = 0; i < CHARS; ++i)
    {
        if (chars [i] != 0)
            distinct++;
    }

    printf("%d", distinct);

    return 0;
}