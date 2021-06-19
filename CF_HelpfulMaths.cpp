#include <iostream>
#include <string.h>
#include <cstring>
using namespace std;

int main()
{
    char str[100];
    gets(str);

    int length = strlen(str);
    int i, j;
    char temp;

    for (i = 0; i < length; i += 2)
    {
        for (j = i + 2; j < length; j += 2)
        {
            if (str[i] > str[j])
            {
                temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }

    printf("%s", str);

    return 0;
}