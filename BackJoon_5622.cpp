#include <string>
#include <iostream>
#include <array>
using namespace std;

int main()
{

    array<int, 26> arr = {
        3, 3, 3, 4, 4, 4, 5, 5, 5, 6, 6, 6, 7, 7, 7, 8, 8, 8, 8, 9, 9, 9, 10, 10, 10, 10};
    string input;
    cin >> input;
    int ret = 0;
    int temp = 0;
    for (int i = 0; i < input.size(); i++)
    {
       ret +=arr[input[i]-'A'];
    }
    cout << ret;

    return 0;
}