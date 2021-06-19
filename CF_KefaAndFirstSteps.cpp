#include <iostream>
using namespace std;

int main()
{
	int data;
	cin >> data;

	int arr[data];
	for (int i = 0; i < data; ++i)
		cin >> arr[i];
	
	int max = 0, temp = 0;
	for (int i = 0; i < data; ++i)
	{
		if ((arr[i] <= arr[i + 1]) && (i != data - 1))
			temp++;
		else
			temp = 0;
		
		if (temp > max)
			max = temp;
	}


	cout << max + 1;



	return 0;
}