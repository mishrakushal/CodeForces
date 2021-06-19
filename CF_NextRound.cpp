#include <iostream>
using namespace std;

int main()
{
    int cases, reference;
    int score[100];
    cin >> cases >> reference;

    for (int i = 0; i < cases; i++)
    {
        cin >> score[i];
    }

    int tag = score[reference-1];

    int count = 0;
    for (int i = 0; i < cases; i++)
    {
        if (score [i] >= tag && score[i] > 0)
            count++;
    }

    cout << count;

    return 0;
}