#include <iostream>
using namespace std;

int main()
{
    int punch, tail, paw, noDamage, totalDragons;
    cin >> punch >> tail >> paw >> noDamage >> totalDragons;

    int count = 0;
    for (int i = 1; i < totalDragons+1; i++)
        if (i%punch == 0 || i%tail == 0 || i%paw == 0 || i%noDamage == 0)
            ++count;

    cout << count;

    return 0;
}