#include <iostream>
using namespace std;

int main()
{
    int k, r;
    scanf("%d %d", &k, &r);

    int cost = 1, multiplier = 1;
    while (true)
    {
        cost = k * (multiplier);
        if ((cost % 10 == 0) || (cost % 10 == r))
        {
            printf("%d\n", multiplier);
            break;
        }
        multiplier++;
    }

    return 0;
}