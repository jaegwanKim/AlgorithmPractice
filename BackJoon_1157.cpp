#include <array>
#include <string>
#include <iostream>

using namespace std;
int main()
{

    array<int, 26> arr = {
        0,
    };

    string input;
    cin >> input;
    for (int i = 0; i < input.size(); i++)
    {
        if (input[i] >= 'a' && input[i] <= 'z')
        {
            arr[input[i] - 'a']++;
        }
        else
        {
            arr[input[i] - 'A']++;
        }
    }

    int first = -1;
    int firstIndex;
    int second = -1;
    for (int i = 0; i < 26; i++)
    {
        if (arr[i] >= first)
        {
            second = first;
            first = arr[i];
            firstIndex = i;
        }
    }
    if (second == first)
    {
        cout << "?";
    }
    else
    {
        cout << (char)('A' + firstIndex);
    }
    return 0;
}