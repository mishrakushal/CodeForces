#include <iostream>
#include <string>
using namespace std;

int main()
{
    string data;
    cin >> data;
    
    int count = 0;

    for (int i = 0; i < data.length(); i++)
    {
        if (data[i] == data[i+1])
        {
            count++;
        }

        //reset counter
        else if (data[i] != data[i+1])
        {
            count = 0;
        }

        if (count+1 >=7)
        {
            cout << "YES";
            return 0;
        }
    }

    cout << "NO";
    return 0;
}