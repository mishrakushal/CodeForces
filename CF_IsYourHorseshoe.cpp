#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    long long int arr[5] = {0}, i, distinct = 0;
    for (i = 0 ; i < 4; ++i)
        scanf("%lld", &arr[i]);

    sort(arr, arr + 4);

    for (i = 0; i < 3; ++i)
    {
        if (arr[i] == arr[i + 1])
            distinct++;
    }

    printf("%lld", distinct);

    return 0;
}