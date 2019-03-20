#include <string>
#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<string> dictionary = {"c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z="};

    string input;
    int ret = 0;
    cin >> input;
    for (int i = 0; i < 8; i++)
    {
        std::string::size_type current = 0;
        std::string::size_type next = 0;

        while (true)
        {
            next = input.find(dictionary[i]);
            if (next == std::string::npos)
            {
                break;
            }
            else
            {
                ret++;
                for (int k = 0; k < dictionary[i].size(); k++)
                {
                    input[next + k] = '0';
                    ret--; //to blcok duplication addtion at line #37
                }
            }
        }
    }
    cout << ret + input.size();

    return 0;
}
