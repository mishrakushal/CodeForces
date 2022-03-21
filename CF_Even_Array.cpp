#include <iostream>
#include <vector>
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;

int main () {
    fastread();
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector <int> v;
        for (int i = 0; i < n; ++i) {
            int el;
            cin >> el;
            v.push_back(el);
        }

        int countEven = 0, countOdd = 0;

        for (int i = 0; i < n; ++i) {
            if (i % 2 != v[i] % 2)
                if ((i % 2 == 0)) countEven++;
                else countOdd++;
        }

        if (countOdd == countEven) cout << countEven << endl;
        else cout << -1 << endl;
    }

    return 0;
}