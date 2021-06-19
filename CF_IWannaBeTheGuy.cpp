#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int p1;
    cin >> p1;
    int arr1[p1];
    for (int i = 0; i < p1; ++i)
        scanf("%d", &arr1[i]);

    int p2;
    cin >> p2;
    int arr2[p2];
    for (int i = 0; i < p2; ++i)
        scanf("%d", &arr2[i]);

    int count[n + 1] = {0};
    for (int i = 0; i < p1; ++i)
        count[arr1[i]]++;

    for (int i = 0; i < p2; ++i)
        count[arr2[i]]++;

    for (int i = 1; i < n + 1; ++i)
        if (count[i] == 0)
        {
            cout << "Oh, my keyboard!\n";
            return 0;
        }
    
    cout << "I become the guy.\n";

    return 0;
}