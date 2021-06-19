#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    register int i, j;
    for (i = 1; i <= n; ++i)
    {
        if (i % 4 == 2)
        {
            for (j = 0; j < m - 1; ++j)
                printf(".");
            printf("#");
        }
        else if (i % 4 == 0)
        {
            printf("#");
            for (j = 0; j < m - 1; ++j)
                printf(".");
        }
        else
        {
            for (j = 0; j < m; ++j)
                printf("#");
        }
        printf("\n");
    }

    return 0;
}