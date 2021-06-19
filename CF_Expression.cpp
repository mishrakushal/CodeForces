#include <iostream>
using namespace std;

int main()
{
    int num1, num2, num3;
    cin >>  num1 >> num2 >> num3; // 1 2 3

    int max = (num1*num2)+num3;     //max = 5
    if (num1+(num2*num3) > max)
    {
        max = num1+(num2*num3);     //max = 7
    }
    if ((num1*num2*num3) > max)
    {
        max = num1*num2*num3;       //max = 7
    }
    if ((num1+num2)*num3 > max)
    {
        max = (num1+num2)*num3;     //max = 9
    }
    if ((num1+num2+num3) > max)
    {
        max = num1+num2+num3;       //max = 9
    }
    if (num1*(num2+num3) > max)
    {
        max = num1*(num2+num3);     //max = 7
    }    
    cout << max;
    return 0;
}