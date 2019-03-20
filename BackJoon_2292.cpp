#include <iostream>

using namespace std;

// check num of values which has same distance from center
//it grows like below
//1 / 6 / 12 / 18 / 24

int main()
{
    int n;
    int compare = 1;
    int ret = 1;
    cin >> n;

    while (true)
    {
        if (n <= compare)
        {
            break;
        }
        else
        {
            compare += (ret * 6);
            ret++;
        }
    }
    cout << ret;

    return 0;
}
