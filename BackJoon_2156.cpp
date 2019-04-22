#include <iostream>
#include <algorithm>
using namespace std;
#define MAX 10001
int main()
{
    int wine[MAX] = {
        0,
    };
    int ret[MAX] = {
        0,
    };
    int n;

    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cin >> wine[i];
        if (i == 1)
        {
            ret[i] = wine[i];
        }
        else if (i == 2)
        {
            ret[i] = ret[1] + wine[i];
        }
        else if (i == 3)
        {
            ret[i] = wine[i] + max(wine[i - 1], wine[i - 2]);
        }
        else
        {
            ret[i] = wine[i] + max(ret[i - 3] + wine[i - 1], ret[i - 2]);
        }
        ret[i] = max(ret[i - 1], ret[i]);
    }
    cout << ret[n];
    return 0;
}