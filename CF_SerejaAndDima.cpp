#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int sereja = 0, dima = 0;
    deque <int> cards;

    for (int i = 0; i < n; ++i) {
        int element;
        cin >> element;
        cards.push_back(element);
    }
    int i = 0;
    while (n--) {
        if (i % 2 == 0) {
            if (cards.front() > cards.back()) {
                sereja += cards.front();
                cards.pop_front();
            } else {
                sereja += cards.back();
                cards.pop_back();
            }
        } else {
            if (cards.front() > cards.back()) {
                dima += cards.front();
                cards.pop_front();
            } else {
                dima += cards.back();
                cards.pop_back();
            }
        }
        i++;
    }
    cout << sereja << " " << dima << "\n";
    return 0;
}