#include <iostream>
using namespace std;

int main()
{
    int bananas = 0, initialCost = 0, inPocket = 0;
    cin >> initialCost >> inPocket >> bananas;

    int totalCost = 0;
    for (int i = 1; i < bananas+1; i++)
    {
        totalCost += i*initialCost;
    }

    if (totalCost < inPocket)
    {
        cout << 0;
    }
    else
    {
        cout << totalCost - inPocket;
    }
    
    return 0;
}