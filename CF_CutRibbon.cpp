#include <iostream>
using namespace std;

int getLength(int n, int a, int b, int c)
{
    if (n == 0)
        return 0;
    if (n < 0)
        return -1;
    
    int result = max (max (getLength(n - a, a, b, c), getLength(n - b, a, b, c)), getLength(n - c, a, b, c));

    if (result == -1)
        return -1;
    return (result + 1);
}

int main()
{
    int n, a, b, c;
    cin >> n >> a >> b >> c;

    cout << getLength(n, a, b, c) << endl;

    return 0;
}