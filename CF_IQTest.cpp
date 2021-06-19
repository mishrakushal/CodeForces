#include <iostream>
using namespace std;

int main()
{
    int cases;
    cin >> cases;
    int even = 0, odd = 0;
    int data[cases];
    for (int i = 0; i < cases; i++)
        cin >> data[i];
    
    for (int i = 0; i < cases; i++)
    {
        ((data[i]%2 == 0) ? ++even : ++odd);
    }

    if (even > odd)
    {
        for (int i = 0; i < cases; i++)
        {
            if (data[i] % 2 != 0)
            {
                //printf("\n");
                cout << ++i;
                return 0;
            }
        }
    }
    else
    {
        for (int i = 0; i < cases; i++)
        {
            if (data[i] % 2 == 0)
            {
                //printf("\n");
                cout << ++i;
                return 0;
            }
        }
    }
}