#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int arr[n];
        for (int i = 0; i < n; ++i)
            arr[i] = (i + 1);

        int last = arr[n - 1];		
        for (int i = n - 1; i > 0; i--)	
            arr[i] = arr[i - 1];		
        
        arr[0] = last;

        for (int i = 0; i < n; ++i)
            cout << arr[i] << " ";
        
        printf("\n");
    }

	



    return 0;
}