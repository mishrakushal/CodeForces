#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; ++i)
        cin >> arr[i];
    
    sort (arr, arr + n);

    int sereja = 0, dima = 0;
    for (int i = n - 1; i >= 0; i -= 2)
        sereja += arr[i];
    for (int i = n - 2; i >= 0; i -= 2)
        dima += arr[i];

    printf("%d %d\n", sereja, dima);

    return 0;
}