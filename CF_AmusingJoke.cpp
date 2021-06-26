#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;

    int count[26] = {0}, i;
    int length1 = s1.length(), length2 = s2.length(), length3 = s3.length();

    for (i = 0; i < length1; ++i)
        count[s1[i] - 65]++;

    for (i = 0; i < length2; ++i)
        count[s2[i] - 65]++;

    for (i = 0; i < length3; ++i)
        count[s3[i] - 65]--;

    for (i = 0; i < 26; ++i)
        if (count[i] != 0)
        {
            cout << "NO\n";
            return 0;
        }
    
    cout << "YES\n";

    return 0;
}