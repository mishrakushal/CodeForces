#include <iostream>
using namespace std;

int main()
{
    int people;
    cin >> people;

    int data[people];
    for (int i = 0; i < people; i++)
        cin >> data[i];
    
    for (int i = 0; i < people; i++)
    {
        if (data[i] == 1)
        {
            cout << "HARD";
            return 0;
        }
    }

    cout << "EASY";
    return 0;
}