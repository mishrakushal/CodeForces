#include <stdio.h>
#include <string.h>

int main()
{
    char string1[100], string2[100];
    gets(string1);
    gets(string2);

    int length1= strlen(string1);
    int length2= strlen(string2);

    for (int i = 0; i < length1; ++i)
    {
        string1[i] = tolower(string1[i]);
    }

    for (int i = 0; i < length2; ++i)
    {
        string2[i] = tolower(string2[i]);
    }

    int res = strcmp(string1, string2);

    if (res > 0)
        printf("1");
    else if (res < 0)
        printf("-1");
    else
        printf("0");

    return 0;
}