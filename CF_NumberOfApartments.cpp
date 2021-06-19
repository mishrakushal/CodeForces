#include <iostream>
using namespace std;

int main()
{
    int cases;
    cin >> cases;

    int windows[cases];
    int apartments[3];

    for (int i = 0; i < cases; i++)
        cin >> windows[i];

    for (int i = 0; i < 3; i++)
        apartments[i] = 0;
    
    for (int i = 0; i < cases; i++)
    {
        apartments[2] += (windows[i]/7);
        windows[i] %= 7;
        apartments[1] += (windows[i]/5);
        windows[i] %= 5;
        apartments[0] += (windows[i]/3);
        windows[i] %= 3;

        for (int j = 0; j < 3; j++)
            cout << apartments[j] << " ";

        printf("\n");
    }

    return 0;

}