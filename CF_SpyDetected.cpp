#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;

    int count[101] = {0}, n, distinct = 0;
    while (t--)
    {
        cin >> n;
        
        int arr[n];
        for (int i = 0; i < n; ++i)
            scanf("%d", &arr[i]);

        for (int i = 1; i < n; ++i)
        {
            if ((arr[i] != arr[i - 1]) || (arr[i] != arr[i + 1]))
            {
                if (arr[i + 1] == arr[i - 1])
                {
                    cout << i + 1 << endl;
                    break;
                }
                else
                {
                    if (arr[i] != arr[i - 1])
                    {
                        cout << i << endl;
                        break;
                    }
                    else
                    {
                        cout << i + 2 << endl;
                        break;
                    }
                }
            }
        }
    }

    return 0;
}