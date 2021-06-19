#include <iostream>
using namespace std;

int main()
{
    int drinks;
    cin >> drinks;

    int glass[drinks];
    for (int i = 0; i < drinks; i++)
        cin >> glass[i];
    
    float total = 0;
    for (int i = 0; i < drinks; i++)
        total += glass[i];
    
    cout << (total/drinks);
    return 0;
}