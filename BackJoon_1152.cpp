/*https://www.acmicpc.net/problem/1152*/

#include <iostream>
#include <string>

using namespace std;

int main()
{

    string input;

    getline(cin, input);
    int ret = 0;
    int index = 0;
    bool flag = true;
    while (index < input.size())
    {

        if (flag)
        {
            if (input[index] != ' ')
            {
                ret++;
                flag = false;
            }
        }
        else
        {
            if (input[index] == ' ')
            {
                flag = true;
            }
        }
        index++;
    }
    cout << ret;

    return 0;
}
