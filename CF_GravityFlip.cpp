#include <iostream>
using namespace std;
int swap(int, int);

int main()
{
    int count;
    cin >> count;
    int boxes[count];

    for (int i = 0; i < count; i++)
        cin >> boxes[i];

    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < count; j++)
            if (boxes[i] > boxes[j])
            {
                int t = boxes[i];
                boxes[i] = boxes[j];
                boxes[j] = t;
            }
    }

    for (int i = count-1; i >= 0; i--)
        cout << boxes[i] << " ";

    return 0;    
}