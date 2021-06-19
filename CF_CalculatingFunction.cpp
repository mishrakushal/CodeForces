#include <iostream>
using namespace std;

int main()
{
    long long int limit;
    cin >> limit;
    cout << ((limit%2 == 0) ? (limit/2) : -((limit/2)+1));
    return 0;
}