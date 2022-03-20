#include <iostream>
#include <vector>
#include <algorithm>
#include <limits.h>
using namespace std;

int main () {
	int n, m;
	cin >> n >> m;

	vector <int> v;
	for (int i = 0; i < n; ++i) {
		int e;
		cin >> e;
		v.push_back(e);
	}

	sort(v.begin(), v.end());

	int maximum = max(v.at(0), m - v.at(n - 1)) * 2;

	for (int i = 0; i < n - 1; ++i) {
		maximum = max(maximum, v[i + 1] - v[i]);
	}

	cout.precision(20);
	cout << fixed << maximum / 2.0;

    return 0;
}