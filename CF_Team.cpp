/*
	take number of test cases n
	for n test cases, if number of 1s > 1, win++
	else next test case
	print win
*/
#include <iostream>
using namespace std;

int main()
{
	int cases = 0;
	cin >> cases;
	int data[cases][3];
	
    for (int i = 0; i < cases; i++)
	{
        for (int j = 0; j < 3; j++)
		    cin >> data[i][j];
	}

    int win = 0, count = 0;
    for (int i = 0; i < cases; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (data[i][j] == 1)
                win++;
        }
        if (win >= 2)
        {
            count++;
        }
        win = 0;
    }

    cout << count;

    return 0;
}