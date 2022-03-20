#include <iostream>
#include <map>
#include <string>
using namespace std;

int main () {
	int n;
	cin >> n;

    map <string, int> mp;
	string s;
	for (int i = 0; i < n; ++i) {
		cin >> s;
		int count = 0;
		
		if (mp.count(s) == 0) {
			cout << "OK" << endl;
			mp[s] = 1;
		} else {
			cout << s << mp[s] << endl;
			mp[s]++;
		}

	}

    return 0;
}