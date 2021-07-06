#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int x;
        cin >> x;

        int i = 1, count = 0, temp = log10(x) + 1;
        while (i <= (x % 10))
        {
            if (i < (x % 10))
                count += 10;
            else
                count += ((temp) * (temp + 1)) / 2;
            i++;
        }
        cout << count << endl;
    }


    return 0;
}