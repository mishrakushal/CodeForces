#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin >> t;

    while (t--) {
		int n;
		cin >> n;
		vector <int> a;
		vector <int> b;
		int minA = INT_MAX;
		int minB = INT_MAX;

		int element;
		for (int i = 0; i < n; ++i) {
			cin >> element;
			a.push_back(element);
			if (element < minA) minA = element;
		}

		for (int i = 0; i < n; ++i) {
			cin >> element;
			b.push_back(element);
			if (element < minB) minB = element;
		}

		long long result = 0, differenceA = 0, differenceB = 0;
		for (int i = 0; i < n; ++i) {
			differenceA = a.at(i) - minA;
			differenceB = b.at(i) - minB;
			result += max(differenceA, differenceB);
		}
		cout << result << "\n";
	}

    return 0;
}