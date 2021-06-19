#include <iostream>
using namespace std;

int main()
{
    int stoneCount = 0;
    cin >> stoneCount;

    char colour[stoneCount];
    for (int i = 0; i < stoneCount; i++)
    {
        cin >> colour[i];
    }
    
    int steps = 0;
    for (int i = 0; i < stoneCount; i++)
    {
        if (colour[i] == colour[i+1])
        {
            steps++;
        }
    }

    cout << steps;
    return 0;
}