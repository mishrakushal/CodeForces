#include <iostream>
using namespace std;

int main()
{
    int given = 0, subtract = 0;
    cin >> given >> subtract;

    while (subtract > 0)
    {
        if (given % 10 == 0)
        {
            given /= 10;
        }
        else
        {
            given--;
        }
        subtract--;
    }

    cout << given;

    return 0;
}