#include <iostream>
using namespace std;

int main()
{
    short int n, m;
    cin >> n >> m;

    n = min(n, m);
    if (n % 2 == 0)
        printf("Malvika\n");
    else
        printf("Akshat\n");

    return 0;   
}