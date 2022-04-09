#include <bits/stdc++.h>
using namespace std;

int main () {
	int a;
	cin >> a;
	
    if (a % 2 == 0) {
        cout << a / 2 << "\n";
        for (int i = 0; i < a / 2; ++i)
            cout << "2 ";
    } else {
        cout << ((a - 3) / 2) + 1 << "\n";
        for (int i = 0; i < ((a - 3) / 2); ++i)
            cout << "2 ";
        cout << "3";
    }

	return 0;
}