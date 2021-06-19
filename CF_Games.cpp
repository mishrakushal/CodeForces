#include <iostream>
using namespace std;

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n][2];
    int i, j;
    for (i = 0; i < n; ++i)
    {
        for (j = 0; j < 2; ++j)
            scanf("%d", &arr[i][j]);
    }

    int xchange = 0;
    for (i = 0; i < n; ++i)
    {
        for (j = 0; j < n; ++j)
        {
            if (j != i)
            {
                if (arr[i][0] == arr[j][1])
                    xchange++;
            }
        }
    }

    printf("%d", xchange);

    return 0;
}