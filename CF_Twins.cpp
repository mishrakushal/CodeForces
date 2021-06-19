#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a[n], i, sum = 0;
    for (i = 0; i < n; ++i)
    {
        scanf("%d", &a[i]);
        sum += a[i];
    }
    // sort coin values
    sort (a, a + n);

    int twin = 0, count = 0;
    for (i = n - 1; i >= 0; --i)
    {
        if (twin <= sum)
        {
            twin += a[i];
            sum -= a[i];
            count++;
        }

        if (twin > sum)
        {
            printf("%d", count);
            return 0;
        }
    }

    return 0;
}