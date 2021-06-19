#include <iostream>
using namespace std;

int main()
{
    int cases;
    cin >> cases;
    
    int data[cases][3];

    for (int i = 0; i < cases; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> data[i][j];

            if (data[i][j] == 0)
            {
                cout << "NO";
                return 0;
            }
        }
    }

    for (int i = 0; i < cases; i++)
    {
        int sum = 0;
        for (int j = 0; j < 3; j++)
        {
            sum += data[i][j];
        }
        if ((sum - 2)%7 == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;

    }

    return 0;
}