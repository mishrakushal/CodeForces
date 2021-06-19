#include <iostream>
using namespace std;

int main()
{
    int friends, max;
    cin >> friends >> max;

    int arr[friends];
    int width = 0;

    for (int i = 0; i < friends; ++i)
    {
        cin >> arr[i];

        if (arr[i] > max)
            width += 2;
        else
            width++;
    }    
    
    cout << width;

    return 0;
}