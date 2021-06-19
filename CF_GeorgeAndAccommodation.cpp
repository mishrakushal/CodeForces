#include <iostream>
using namespace std;

int main()
{
    int rooms;
    cin >> rooms;   

    //initialise hotel rooms like matrix
    int hotel[rooms][2];
    for (int i = 0; i < rooms; i++)
    {
        for (int j = 0; j < 2; j++)
            cin >> hotel[i][j];
    }
    
    int freeRooms = 0;
    for (int i = 0; i < rooms; i++)
    {
        if ((hotel[i][1] - hotel[i][0]) >= 2)
            freeRooms++;
    }

    cout << freeRooms;

    return 0;
}