#include <bits/stdc++.h>
using namespace std;

int main () {
    int n, t;
    cin >> n >> t;

    int v[n + 1];
    for (int i = 1; i < n + 1; ++i) {
        cin >> v[i];
    }

    int sum = 0;
    int i = 1;
    bool isPossible = false;
    while (i < n + 1) {
        if (t == i) {
            isPossible = true;
            break;
        }
        i += v[i];
    }

    if (isPossible) cout << "YES\n";
    else cout << "NO\n";

    return 0;
}