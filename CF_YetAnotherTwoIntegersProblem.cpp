#include <iostream>
using namespace std;

#define ll long long

int main()
{
    int t;
    scanf("%d", &t);

    ll int a, b;
    while (t--)
    {
        cin >> a >> b;

        if (a == b)
            printf("0\n");
        else
        {
            if (std::abs(a - b) % 10 == 0)
                cout << std::abs(a - b) / 10 << endl;
            else
                cout << (std::abs(a - b) / 10) + 1 << endl;
        }
    }

    return 0;
}