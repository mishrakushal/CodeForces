#include <iostream>
#include <vector>
#include <algorithm>
#include <limits.h>
using namespace std;

int main () {
	int n, m;
	cin >> n >> m;

	vector <int> v;
	for (int i = 0; i < m; ++i) {
		int e;
		cin >> e;
		v.push_back(e);
	}

	sort(v.begin(), v.end());

	int upTo = m - n, min = INT_MAX;
	for (int i = 0; i <= upTo; ++i) {
		if (v[i + n - 1] - v[i] < min)
			min = v[i + n - 1] - v[i];
	}

	cout << min;
    return 0;
}