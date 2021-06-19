#include <iostream>
#include <string>
using namespace std;

int main()
{
    string num1, num2;
    cin >> num1 >> num2;
    
    for (int i = 0; i < num1.length(); i++)
        cout << ((num1[i] != num2[i]) ? '1' : '0');

    return 0;
}