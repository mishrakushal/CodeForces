#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int cases;
    cin >> cases;
    int data[1][cases];
    
    for (int i = 0; i < cases; i++)
    {
        cin >> data[1][i];
    }

    for (int i = 0; i < cases; i++)
    {
        cout << round(log10(data[1][i])+1) << endl;
    }

    return 0;
}