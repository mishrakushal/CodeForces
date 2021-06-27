#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);

    int a[n], i;
    for (i = 0; i < n; ++i)
        scanf("%d", &a[i]);

    sort (a, a + n);

    int count = 0;
    for (i = 0; i < n - 2; i += 3)
    {
        if (5 - a[i + 2] >= k)
            count++;
    }

    printf("%d\n", count);

    return 0;
}