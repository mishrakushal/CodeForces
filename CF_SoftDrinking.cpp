#include <iostream>
using namespace std;

int main()
{
    int n, k, l, c, d, p, nl, np;
    scanf("%d %d %d %d %d %d %d %d", &n, &k, &l, &c, &d, &p, &nl, &np);

    // per toast per person
    int total_slices = c * d;
    int total_salt = p / np;
    int total_drink = (k * l) / nl;

    int min1 = min (total_drink, total_slices);
    int min2 = min (min1, total_salt);

    cout << min2 / n << endl;

    return 0;
}