#include <iostream>
using namespace std;

int main()
{
    int n;
    scanf("%d", &n);

    string c;
    int sum = 0;
    while (n-- > 0)
    {
        cin >> c;
        if (c[0] == 'T')
            sum += 4;
        else if (c[0] == 'C')
            sum += 6;
        else if (c[0] == 'O')
            sum += 8;
        else if (c[0] == 'D')
            sum += 12;
        else
            sum += 20;
    }

    printf("%d", sum);

    return 0;
}