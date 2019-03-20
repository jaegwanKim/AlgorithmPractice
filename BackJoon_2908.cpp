#include <string>
#include <iostream>

using namespace std;

int main()
{

    string str1, str2;
    int r1 = 0, r2 = 0;
    cin >> str1 >> str2;

    r1 = (str1[0] - '0') + ((str1[1] - '0') * 10) + ((str1[2] - '0') * 100);
    r2 = (str2[0] - '0') + ((str2[1] - '0') * 10) + ((str2[2] - '0') * 100);

    if (r1 < r2)
    {
        cout << r2;
    }
    else
    {
        cout << r1;
    }
    return 0;
}