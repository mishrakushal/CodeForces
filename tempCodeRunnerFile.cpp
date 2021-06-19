#include <iostream>
#include <limits.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int min = INT_MAX, minIndex, max = INT_MIN, maxIndex;
    int a[n];
    for (int i = 0; i < n; ++i)
    {
        scanf("%d", &a[i]);
        
        if (a[i] > max)
        {
            maxIndex = i;
            max = a[i];
        }
        
        if (a[i] <= min)
        {
            minIndex = i;
            min = a[i];
        }
    }

    int time = maxIndex + (n - 1 - minIndex) - 1;
    printf("%d", time);    

   return 0;
}