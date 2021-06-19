#include <iostream>
using namespace std;

int main()
{
    int magnets;
    cin >> magnets;
    
    int data[magnets];
    for (int i = 0; i < magnets; i++)
        cin >> data[i];

    int groups = 0;
    for (int i = 0; i < magnets; i++)
    {
        if (data[i] != data[i+1])
            groups++;
    }

    cout << groups;
    return 0;
}