#include <iostream>
using namespace std;

#define ll long long

int main()
{
    ll int n;
    cin >> n;

    if (n % 2 == 0)
        cout << "4 " << n - 4 << endl;
    else
        cout << n - 9 << " 9" << endl;

    return 0;
}