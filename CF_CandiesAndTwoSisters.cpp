#include <iostream>
using namespace std;

#define ll long long

int main()
{
    int t;
    scanf("%d", &t);

    int n;
    ll int result = 0;
    while (t-- > 0)
    {
        scanf("%d", &n);
        result = (n - 1) / 2;
        printf("%lld\n", result);
    }

    return 0;
}