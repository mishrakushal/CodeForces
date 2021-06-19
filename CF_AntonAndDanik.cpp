#include <iostream>
//#include <string>
using namespace std;

int main()
{
    int games;
    cin >> games;
    
    char data[games];
    for (int i = 0; i < games; i++)
    {
        cin >> data[i];
    }

    int anton = 0, danik = 0;
    for (int i = 0; i < games; i++)
    {
        if (data[i] == 'A')
            anton++;
        else
            danik++;
    }

    if (anton > danik)
    {
        cout << "Anton";
    }
    else if (danik > anton)
    {
        cout << "Danik";
    }
    else
    {
        cout << "Friendship";
    }

    return 0;
}