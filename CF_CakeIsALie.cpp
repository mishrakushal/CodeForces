#include <iostream>
using namespace std;

int main()
{
    int cases;
    cin >> cases;

    while (cases--)
    {
        int n, m, k;
        cin >> n >> m >> k;
        int cost = 0;
        int x = 1, y = 1;
        while (x <= n)
        {
            if (y < m)
            {
                y++;
                cost += x;
            }
            ++x;
        }

        x = 1, y = 1;
        while (y <= m)
        {
            if (x < n)
            {
                x++;
                cost += y;
            }
            ++y;
        }

        if (cost == k)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}