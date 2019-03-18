#include <iostream>
#include <string>

using namespace std;

int main()
{

    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int r;
        string input;
        string ret;
        cin >> r;
        cin >> input;
        for (int j = 0; j < input.size(); j++)
        {
            for (int k = 0; k < r; k++)
            {
                ret.push_back(input[j]);
            }
        }
        cout << ret << endl;
    }

    return 0;
}