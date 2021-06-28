#include <iostream>
using namespace std;

int main()
{
    int n;
    scanf("%d", &n);

    int games[n][2], a[2]= {0};
    for (int i = 0; i < n; ++i)
    {
        scanf("%d %d", &games[i][0], &games[i][1]);

        if (games[i][0] > games[i][1])
            a[0]++;
        else if (games[i][0] < games[i][1])
            a[1]++;
    }    

    if (a[0] > a[1])
        cout << "Mishka\n";
    else if (a[0] < a[1])
        cout << "Chris\n";
    else
        cout << "Friendship is magic!^^\n";

    return 0;
}