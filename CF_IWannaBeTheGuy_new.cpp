#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[210] = {0};
    register int i;

    int p1;
    cin >> p1;

    for (i = 0; i < p1; ++i)
        scanf("%d", &arr[i]);
    
    int p2;
    cin >> p2;
    for (i = p1; i < p2; ++i)
        scanf("%d", &arr[i]);
    
    int count[n + 1] = {0};

    for (i = 0; i < (p1 + p2); ++i)
        count[arr[i]]++;

    for (i = 1; i < n + 1; ++i)
        if (count[i] == 0)
        {
            printf("Oh, my keyboard!\n");
            return 0;
        }    

    printf("I become the guy.\n");
    
    return 0;
}