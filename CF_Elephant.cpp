#include <iostream>
using namespace std;

int main()
{
    int house = 0;
    cin >> house;

    int steps = 0, remainder = house;
    steps += remainder/5;
    remainder %= 5;
    steps += remainder/4;
    remainder %= 4;
    steps += remainder/3;
    remainder %= 3;
    steps += remainder/2;
    remainder %= 2;
    steps += remainder;

    cout << steps;
    return 0;

}