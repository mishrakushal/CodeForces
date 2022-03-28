#include <bits/stdc++.h>
using namespace std;

int main () {
    int x = 0;
    cin >> x;

    int setBits = 0;
    while (x > 0) {
        setBits += x % 2;
        x /= 2;
    }

    cout << setBits;

    return 0;
}