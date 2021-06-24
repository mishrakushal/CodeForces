#include <iostream>
#include <algorithm>
using namespace std;

#define ll long long

int main()
{
    ll int arr[4], i;
    for (i = 0; i < 4; ++i)
        cin >> arr[i];

    sort (arr, arr + 4);

    ll int a = arr[3] - arr[2];
    ll int b = arr[3] - arr[1];
    ll int c = arr[3] - arr[0];

    cout << a << " " << b << " " << c << endl;
    
    return 0;
}