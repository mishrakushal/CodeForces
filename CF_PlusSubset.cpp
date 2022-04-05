#include <bits/stdc++.h>
using namespace std;

int main () {
	int t;
	cin >> t;

	while (t--) {
		int n;
		cin >> n;

		int arr[n];
		int minimum = INT_MAX, maximum = INT_MIN;
		for (int i = 0; i < n; ++i) {
			cin >> arr[i];
			if (arr[i] > maximum) maximum = arr[i];
			if (arr[i] < minimum) minimum = arr[i];
		}

		cout << maximum - minimum << "\n";
	}

	return 0;
}