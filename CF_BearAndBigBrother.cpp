#include <iostream>
using namespace std;

int main()
{
    int limak = 0, bob = 0;
    cin >> limak >> bob;

    int years = 0;
    while (limak <= bob)
    {
        limak *= 3;
        bob *= 2;
        years++;
    }

    cout << years;

    return 0;
}