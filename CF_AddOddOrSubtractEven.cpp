#include <iostream>
using namespace std;

int main()
{
    int t;
    scanf("%d", &t);

    unsigned int a, b;
    while (t--)
    {
        cin >> a >> b;
        if (a == b)
            cout << "0\n";
        else
        {
            if (a < b)
            {
                if (a & 1)
                {
                    if (b & 1)
                        cout << "2\n";
                    else
                        cout << "1\n";
                }
                else
                {
                    if (b & 1)
                        cout << "1\n";
                    else
                        cout << "2\n";
                }
            }
            else
            {
                if (a & 1)
                {
                    if (b & 1)
                        cout << "1\n";
                    else
                        cout << "2\n";
                }
                else
                {
                    if (b & 1)
                        cout << "2\n";
                    else
                        cout << "1\n";
                }
            }
        }
    }




    return 0;
}