#include <iostream>
using namespace std;

#define ll long long

int main()
{
    int test;
    cin >> test;

    ll int a, b;
    while (test--)
    {
        scanf("%lld %lld", &a, &b);
        if (a % b == 0)
            printf("0\n");
        else
            printf("%d\n", (b - (a % b)));
    }

    return 0;
}