#include <iostream>
using namespace std;

int main()
{
    int test;
    cin >> test;

    while (test--)
    {
        int n;
        cin >> n;
        int arr[n], sum = 0, one = 0;
        for (int i = 0; i < n; ++i)
        {
            scanf("%d", &arr[i]);

            if (arr[i] == 1)
                one++;
            
            sum += arr[i];

        }        

        if (sum % 2 == 0 && (one > 1))
            cout << "YES\n";
        else if (one == 0 && n % 2 == 0)
            cout << "YES\n";
        else
            cout << "NO\n";

        
    }



    return 0;
}