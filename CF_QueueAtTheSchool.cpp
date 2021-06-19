#include <iostream>
using namespace std;

int main()
{
    int count, time;
    cin >> count >> time;
    char q[count];
    cin >> q;

    while (time > 0)
    {
        for (int i = 0; i < count; ++i)
        {
            if ((q[i + 1] == 'G') && q[i] == 'B')
            {
                q[i] = 'G';
                q[i + 1] = 'B';
                i++;
            }
        }
        time--;
    }

    puts(q);

    return 0;
}