#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int x[3];
    scanf("%d %d %d", &x[0], &x[1], &x[2]);

    sort (x, x + 3);

    int min_distance = x[2] - x[0];

    printf("%d\n", min_distance);

    return 0;
}