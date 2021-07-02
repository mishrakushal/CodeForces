#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    char arr[n][m];
    register int i, j;
    int flag = 0;
    for (i = 0; i < n; ++i)
    {
        for (j = 0; j < m; ++j)
        {
            cin >> arr[i][j];

            if (arr[i][j] == 'C' || arr[i][j] == 'M' || arr[i][j] == 'Y')
                flag = 1;
        }
    }

    if (flag)
        cout << "#Color\n";
    else
        cout << "#Black&White\n";

    return 0;
}