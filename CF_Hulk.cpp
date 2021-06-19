#include <iostream>
using namespace std;

int main()
{
    int cases;
    cin >> cases;
    
    for (int i = 1; i <= cases; i++)
    {
        cout << ((i%2 != 0) ? "I hate " : "I love ");
        cout << ((i == cases) ? "it" : "that ");
    }
    return 0;
}