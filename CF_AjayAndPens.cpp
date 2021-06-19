/*  count number of occurences of a number and store each occurence in an array
    number of boxes = max(occurence value)
*/

#include <iostream>
using namespace std;

int main()
{
    int pens;
    cin >> pens;
    int color[pens];
    for (int i = 0; i < pens; ++i)
    {
        cin >> color[i];
    }
    
    int count = 0;
    int occ[pens];
    for (int i = 0; i < pens; ++i)
    {
        for (int j = 0; j < pens; ++j)
        {
            if (color[i] == color[j])
            {
                count ++;
            }
        }
        occ[i] = count;
        count = 0;
    }

    int max = 0; 
    for (int i = 0; i < pens; ++i)
    {
        if (occ[i] >= max)
        {
            max = occ[i];
        }
    }
    cout << max;

    return 0;
}