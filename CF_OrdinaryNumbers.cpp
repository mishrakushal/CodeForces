#include <iostream>

int main()
{
	int cases;
	cin >> cases;
	
	while(cases--)
	{
		int red, blue, max;
		cin >> red >> blue >> max;
		
		int d1 = red/blue, d2 = blue/red;
		if ((d1 <= max) && (d2 <= max))
			cout << "YES";
		else
			cout << "NO";		
		
	}
	
	
	return 0;
}