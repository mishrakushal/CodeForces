#include <iostream>
using namespace std;

#define ll long long

int main()
{
    ll int events;
    cin >> events;

    ll int active_cops = 0;
    ll int unsolved = 0;

    ll int a[events], i;
    for (i = 0; i < events; ++i)
    {
        cin >> a[i];

        if ((a[i] < 0) && (active_cops > 0))
            active_cops--;
        else if (a[i] > 0)
            active_cops += a[i];
        else
            unsolved++;
    }

    cout << unsolved;

    return 0;
}