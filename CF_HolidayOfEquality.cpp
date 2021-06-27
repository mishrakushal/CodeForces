#include <iostream>
#include <algorithm>
using namespace std;

#define ll long long

int main()
{
    int n;
    scanf("%d", &n);

    ll int a[n], i;
    for (i = 0; i < n; ++i)
        cin >> a[i];

    sort (a , a + n);

    int count = 0;
    for (i = 0; i < n - 1; ++i)
        count += a[n - 1] - a[i];

    printf("%d\n", count);

    return 0;
}