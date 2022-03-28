#include <bits/stdc++.h>
using namespace std;

int main () {
    int n;
    cin >> n;

    while (n--) {
        int t;
        cin >> t;
        
        int modulus = t % 2020;
        int quotient = t / 2020;

        if (modulus > quotient) cout << "NO\n";
        else cout << "YES\n";
    }


    return 0;
}