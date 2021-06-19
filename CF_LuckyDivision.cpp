#include <iostream>
using namespace std;

int main()
{
    int data[] = {4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 777};
    int number, flag = 0;
    cin >> number;
    for (int i = 0 ; i < 13 ; ++i)
    {
        if ((number % data[i]) == 0)
            flag++;
    }

    if (flag)
        printf("YES");
    else
        printf("NO");

    return 0;
}