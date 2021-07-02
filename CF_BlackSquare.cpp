#include <iostream>
using namespace std;

int main()
{
    int a[5];
    for (int i = 1; i < 5; ++i)
        scanf("%d", &a[i]);
    
    string s;
    cin >> s;
    
    unsigned int length = s.length();
    int calories = 0;

    for (register int  i = 0; i < length; ++i)
        calories += (a[(s[i] - 48)]);

    cout << calories << endl;

    return 0;
}