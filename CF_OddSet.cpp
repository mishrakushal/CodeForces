#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    
    while (t--)
    {
        int n;
        cin >> n;
        int a[2 * n], odd_count = 0;
        for (int i = 0; i < 2 * n; ++i)
        {
            cin >> a[i];

            if (a[i] & 1)
                odd_count++;
        }

        if (odd_count == n)
            cout << "Yes\n";
        else
            cout << "No\n";
    }

    return 0;
}