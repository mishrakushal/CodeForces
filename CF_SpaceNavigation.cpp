#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int main()
{
    int cases;
    cin >> cases;
    
    while (cases > 0)
    {
        int x, y;                       //final coordinates
        int p = 0, q = 0;               //origin
        cin >> x >> y;

        string directions;
        cin >> directions;

        for (int i = 0; i < directions.length(); ++i)
        {
            if (directions[i] == 'R')
            {
                ++p;
            }
            else if (directions[i] == 'L')
            {
                --p;
            }
            else if (directions[i] == 'U')
            {
                ++q;
            }
            else if (directions[i] == 'D')
            {
                --q;
            }
        }

        if ((std::abs(x) <= std::abs(p)) && (std::abs(y) <= std::abs(q)))
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
        


        --cases;
    }

    return 0;
}
