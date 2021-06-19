#include <iostream>
using namespace std;

#define ll long long

int main()
{
    ll int n;
    cin >> n;

    ll int res = 0;
    res += n / 100;
    n %= 100;
    
    res += n / 20;
    n %= 20;
    
    res += n / 10;
    n %= 10;
    
    res += n / 5;
    n %= 5;
    
    res += n / 1;

    cout << res;

    return 0;
}