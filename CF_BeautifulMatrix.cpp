#include <iostream>
using namespace std;

int main()
{
    int data[5][5];
    int row = 0, column = 0;
    int moves = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> data[i][j];
        }
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (data[i][j] == 1)
            {
                row = i+1, column = j+1;
            }
        }
    }

    if (row != 3)
    {
        while (row != 3)
        {
            if (row > 3)
            {
                moves++;
                row--;
            }
            else
            {
                moves++;
                row++;
            }

        }
    }

    if (column != 3)
    {
        while (column != 3)
        {
            if (column > 3)
            {
                moves++;
                column--;
            }
            else
            {
                moves++;
                column++;
            }

        }
    }

    cout << moves;

    return 0;

}