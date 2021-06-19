#include <iostream>
using namespace std;

int main()
{
    int tests;
    cin >> tests;
    
    while (tests-- > 0)
    {
        int size;
        cin >> size;
        
        register int i = 0, j = 0;

        int arr[size];
        for (i = 0; i < size; ++i)
        {
            cin >> arr[i];
        }

        int count = 0;
        
        for (i = 0; i < size; ++i)
        {
            for (j = i + 1; j < size; ++j)
            {
                if ((arr[j] - j) == (arr[i] - i))
                    count++;
            }
        }

        cout << count;
        printf("\n");
    }

    return 0;
}