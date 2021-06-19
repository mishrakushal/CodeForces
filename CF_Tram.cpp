#include <iostream>
using namespace std;

int main()
{
    int cases;
    cin >> cases;
    int data[cases][2];

    for (int i = 0; i < cases; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> data[i][j];
        }
    }

    int max = 0, count = 0;

    for (int i = 0; i < cases; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            if (j == 0)
            {
                count -= data[i][j];
            }
            else
            {
                count += data[i][j];
            }
            
            if (count > max)
            {
                max = count;
            }
        }
    }

    cout << max;

    return 0;
}