#include <iostream>
using namespace std;

int main()
{
    int n;
    scanf("%d", &n);

    int a[n], i;
    for (i = 0; i < n; ++i)
        scanf("%d", &a[i]);

    int best = a[0], worst = a[0];
    short int amazing = 0;

    for (i = 1; i < n; ++i)
    {
        if (a[i] < worst)
        {
            worst = a[i];
            amazing++;
        }

        if (a[i] > best)
        {
            best = a[i];
            amazing++;
        }
    }

    printf("%d\n", amazing);

    return 0;
}