#include <iostream>
using namespace std;

#define ll long long

int main()
{
    long int t;
    cin >> t;

    ll int x, y, n;
    while (t--)
    {
        cin >> x >> y >> n;
        cout << (((n - y) / x) * x) + y << endl;
    }

    return 0;
}