#include <iostream>
using namespace std;

#define ll long long

int main()
{
    ll int n;
    cin >> n;

    ll int k, count[5] = {0}, i;
    for (i = 0; i < n; ++i)
    {
        cin >> k;
        count[k]++;
    }

    ll int taxi = 0;
    taxi += count[4] + count[3] + (count[2] / 2);
    count[1] -= count[3];
    
    if (count[2] % 2 == 1)
    {
        taxi++;
        count[1] -= 2;
    }

    if (count[1] > 0)
        taxi += ((count[1] + 3) / 4);

    cout << taxi << endl;

    return 0;
}