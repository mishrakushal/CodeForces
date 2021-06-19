#include <iostream>
#include <ctype.h>
using namespace std;

const int CHARS = 26;

int main()
{
    int n;
    scanf("%d", &n);
    scanf("\n");
    char str[n];
    gets(str);

    char chars[CHARS] = {0};
    int i, j;
    for (i = 0; i < n; ++i)
    {
        str[i] = tolower(str[i]);
        if ((str[i] >= 97) && (str[i] <= 122))
        {
            chars [str[i] - 97]++;
        }
    }

    for (i = 0; i < CHARS; ++i)
    {
        if (chars [i] == 0)
        {
            printf("NO\n");
            return 0;
        }
    }

    printf("YES\n");

    return 0;
}