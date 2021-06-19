#include <iostream>
using namespace std;

int main()
{
    int year;
    cin >> year;

    int a, b, c, d;

    for (int i = year + 1; i <= 9012; ++i)
    {
        a = i / 1000;
        b = (i / 100) % 10;
        c = (i / 10) % 10;
        d = i % 10;

        if ((a != b) && (a != c) && (a != d) && (b != c) && (b != d) && (c != d))
        {
            printf("%d", i);
            return 0;
        }
    }
}