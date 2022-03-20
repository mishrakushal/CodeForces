#include <iostream>
#include <vector>
using namespace std;

int main () {
	int n;
	cin >> n;

	vector <int> v;
	// auto itr = v.begin();
	for (int i = 0; i < n; ++i) {
		int e;
		cin >> e;
		v.push_back(e);
	}

	vector <int> res (n, 0);
	for (int i = 0; i < n; ++i) {
		res[v.at(i)] = i;
	}

	for (int i = 1; i <= n; ++i) {
		cout << res[i] + 1 << " ";
	}

    return 0;
}