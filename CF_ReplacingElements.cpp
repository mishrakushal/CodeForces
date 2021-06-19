#include <iostream>
using namespace std;

int main()
{
	int cases;
	cin >> cases;
	while (cases>0)
	{
        jump:
		int size, max;
		cin >> size >> max;
		int data[size];
		for (int i = 0; i < size; i++)
		{
			cin >> data[i];
		}
		for (int i = 0; i < size; i++)
		{
			for (int j = i+1; j < size && (j != i); j++)
			{
				if (data[i] + data[j] <= max)
				{
					cout << "YES";
                    goto jump;
				}
                if (j == --size)
                {
                    cout << "NO";
                    goto jump;
                }
				
			}
		}
        for (int i = 0; i < size; i++)
        {
            if (data[i] <= max)
            {
                if (i == --cases)
                {
                    cout << "YES";
                }
                else
                {
                    cout << "NO";
                }
                
            }
            else if (data[i] >= max)
            {
                cout << "NO";
            }            
        }
		--cases;
	}
	
	return 0;
}