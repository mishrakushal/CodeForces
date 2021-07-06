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
        int digit = x % 10;
        count = ((digit - 1) * 10) + ((temp) * (temp + 1) / 2);
        cout << count << endl;
    }


    return 0;
}

/*

while (i <= (x % 10))
        {
            if (i < (x % 10))
                count += 10;
            else
                count += ((temp) * (temp + 1)) / 2;
            i++;
        }

*/