#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    scanf("%d", &t);

    int s[4];
    int max1, max2;
    while (t--)
    {
        scanf("%d %d %d %d", &s[0], &s[1], &s[2], &s[3]);
        max1 = max(s[0], s[1]);
        max2 = max(s[2], s[3]);

        sort (s, s + 4);
        if ((max1 == s[2] || max1 == s[3]) && (max2 == s[2] || max2 == s[3]))
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}