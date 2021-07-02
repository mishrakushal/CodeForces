#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    int sum = 0;
    while (t--)
    {
        int a, b, c, d;
        scanf("%d %d %d %d", &a, &b, &c, &d);
        sum = a + b + c + d;

        if (sum % 3 == 0)
        {
            int ave = sum / 3;
            if (a <= ave && b <= ave && c <= ave)
                printf("YES\n");
            else
                printf("NO\n");
        }
        else
            printf("NO\n");
    }

    return 0;
}