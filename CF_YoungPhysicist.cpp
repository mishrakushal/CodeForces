#include <iostream>
using namespace std;

int main()
{
    int cases = 0;
    cin >> cases;
    int data[cases][3];
    int sum[1][3];

    //flushing sum matrix
    for (int i = 0; i < 1; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            sum[i][j] = 0;
        }
    }

    for (int i = 0; i < cases; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> data[i][j];
        }
    }

    for (int i = 0; i < cases; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (j == 0)
            {
                sum[0][0] += data[i][j];
            }
            else if (j == 1)
            {
                sum[0][1] += data[i][j];
            }
            else
            {
                sum[0][2] += data[i][j];
            }
        }
    }

    if (sum[0][0] == 0 && sum[0][1] == 0 && sum[0][2] == 0)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    
    return 0;
    
}