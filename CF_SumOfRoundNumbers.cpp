#include <iostream>
using namespace std;

int main()
{
    int t;
    scanf("%d", &t);

    int n, multiplier, count, temp;
    while (t--)
    {
        count = 0;
        multiplier = 1;
        scanf("%d", &n);
        temp = n;

        while (temp > 0)
        {
            if (temp % 10 != 0)
                count++;
            temp /= 10;
        }

        printf("%d\n", count);

        while (n > 0)
        {
            if (n % 10 != 0)
                printf("%d ", multiplier * (n % 10));

            multiplier *= 10;
            n /= 10;
        }
        printf("\n");
    }

    return 0;
}