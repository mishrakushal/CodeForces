#include <iostream>
using namespace std;

int main()
{
    int a, b;
    scanf("%d %d", &a ,&b);

    int remainder = (max(a, b) - min(a, b));

    printf("%d %d", min(a, b), (remainder / 2));

    return 0;
}