#include <iostream>
using namespace std;

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);

    int i = 1, problems_solved = 0;
    int time_left = 240 - k;
    int count = 5;

    while (true)
    {
        if ((time_left / count) != 0 && (problems_solved < n))
        {
            problems_solved++;
            time_left -= count;
            i++;
            count = 5 * i;
        }
        else
            break;
    }

    cout << problems_solved;

    return 0;
}