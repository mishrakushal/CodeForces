/*  take string from user
    replace all vowels with "\0" null
    put '.' (dot) before non-vowels
    print resultant string
*/
#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
	string word;
	cin >> word;
	for (int i = 0; i < word.length(); i++)
	{
		if (word[i] != 'a' && word[i] != 'A' && word[i] != 'e' && word[i] != 'E' && word[i] != 'i' && word[i] != 'I' && word[i] != 'o' && word[i] != 'O' && word[i] != 'u' && word[i] != 'U')
		{
			if (isupper(word[i]) == true)
			{
				word[i] += 32;
				cout << '.' << word[i];
			}
			else
			{
				cout << '.' << word[i];
			}
		}
	}

	return 0;
}