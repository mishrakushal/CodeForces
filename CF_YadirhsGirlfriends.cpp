#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n, max, time;
    cin >> n >> max >> time;
    int data[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> data[i];
    }
    std::sort(data, data+n);
    // { 2 3 4 7 13 19 }
    int car = 0, count = 0;
    for (int i = 0; i < n; ++i)
    {
        ++count;
        if (((data[i+1] - data[i]) <= time) && (count%max != 0))
        {
            continue;
        }
        else
        {
            ++car;
            count = 0;
        }
    }
    cout << car;

    return 0;
}