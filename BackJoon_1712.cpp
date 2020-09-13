#include <iostream>
using namespace std;

int main()
{
    long a, b, c;
    long ret = -1;
    cin >> a >> b >> c;

    if (c - b > 0)
    {
        ret = 1 + (a / (c - b));
    }

    cout << ret << endl;
    return 0;
}