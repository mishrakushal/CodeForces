#include <iostream>
using namespace std;

int main()
{
    int tests[4];

    for (int i = 0; i < 4; i++)
        cin >> tests[i];

    int min = tests[0];

    for (int i = 0; i < 4; i++)
    {
        if(tests[i] < min)
            min = tests[i];
    }

    cout << min;

    return 0;
}