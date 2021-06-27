#include <iostream>
using namespace std;
#define ll long long

int main()
{
    int t;
    scanf("%d", &t);

    ll int n;
    int i;
    while (t--)
    {
        cin >> n;

        for (i = 4; i <= n + 1; i *= 2)
        {
            if ((n % (i - 1)) == 0)
            {
                cout << (n / (i - 1)) << endl;
                break;
            }
        }
    }

    return 0;
}