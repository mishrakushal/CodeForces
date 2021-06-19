#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    long long num[3][n];
    
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < n; ++j)
            cin >> num[i][j];
    }

    int count = 0;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            if (num[0][i] < num[1][j])
            {
                for (int k = 0; k < n; ++k)
                {
                    if (num[1][j] < num[2][k])
                    {
                        count++;
                    }
                }
            }
        }
    }

    cout << count;
    return 0;
}