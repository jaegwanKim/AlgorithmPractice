#include <iostream>
#include <string>
#include <array>
using namespace std;

int main()
{

    array<int, 26> arr;

    string input;
    
    for (int i = 0; i < 26; i++)
    {
        arr[i] = -1;
    }

    cin >> input;

    for (int i = 0; i < input.size(); i++)
    {
        if (arr[input[i] - 'a'] == -1)
        {
            arr[input[i] - 'a'] = i;
        }
    }

    for (auto a : arr)
    {
        cout << a << " ";
    }
}