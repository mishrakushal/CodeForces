#include <iostream>
using namespace std;

int main()
{
    int cases;
    cin >> cases;

    while (cases > 0)
    {
        int n, k1, k2;
        int white, black;
        
        cin >> n;
        cin >> k1 >> k2;
        cin >> white >> black;

        int whiteCells = (k1+k2), blackCells = ((2*n) - (k1+k2));
        if (whiteCells/(white*2) == 0)
        {
            if (blackCells/(black*2) == 0)
            {
                cout << "YES";
            }
        }
        else
        {
            cout << "NO";
        }

        --cases;
    }

    return 0;
}