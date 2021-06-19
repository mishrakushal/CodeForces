#include <iostream>
using namespace std;

int main()
{
    long int data[10];
    int size;

    for (int i = 0; i < size; ++i)
    {
        cin >> data[i];
    }
    
    long int sum = 0;
    for (int i = 0; i < size; ++i)
    {
        sum = sum + data[i];
    }

    cout << sum;
    return 0;
}
