#include <iostream>

using namespace std;
int main()
{

    int a, b, v;
    int ret = 1;

    cin >> a >> b >> v;

    if ((v - a) % (a - b) != 0)
    {
        ret++;
    }

    ret += (v - a) / (a - b);
    cout << ret;

    return 0;
}