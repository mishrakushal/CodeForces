#include <iostream>
using namespace std;

int main()
{
    int arr[5][5];
    int one_row, one_col;
    for (int i = 0; i < 5; ++i)
    {
        for (int j = 0; j < 5; ++j)
        {
            cin >> arr[i][j];

            if (arr[i][j] == 1)
            {
                one_row = i;
                one_col = j;
            }
        }
    }

    cout << std::abs(2 - one_row) + std::abs(2 - one_col) << endl;

    return 0;
}