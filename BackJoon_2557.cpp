/*https://www.acmicpc.net/problem/2577*/

#include <iostream>
#include <string>
using namespace std;

int main()
{

    int countArr[10] = {
        0,
    };
    int a;
    int b;
    int c;
    int result;
    cin >> a >> b >> c;

    string temp = to_string(a * b * c);
    for (int i = 0; i < temp.size(); i++)
    {
        countArr[temp[i] - '0']++;
    }

    for (int i = 0; i < 10; i++)
    {
        cout << countArr[i] << endl;
    }
    return 0;
}