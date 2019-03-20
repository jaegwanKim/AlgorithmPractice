#include <iostream>
#include <string>
#include <array>
using namespace std;

bool check(string str)
{

    array<int, 26> arr = {
        0,
    };
    char prev = -1;
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] != prev)
        {
            if (arr[str[i] - 'a'])
            {
                return false;
            }
            else
            {
                arr[str[i] - 'a'] = 1;
            }
            prev = str[i];
        }
    }
    return true;
}

int main()
{

    int n;
    int ret = 0;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        string temp;
        cin >> temp;
        if (check(temp))
        {
            ret++;
        }
    }
    cout << ret;
    return 0;
}