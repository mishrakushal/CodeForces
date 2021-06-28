#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;

    short int a[2];
    while (t--)
    {
        cin >> a[0] >> a[1];
        sort (a, a + 2);
        a[0] *= 2;
        sort (a, a + 2);
        cout << a[1] * a[1] << endl;
    }

    return 0;
}