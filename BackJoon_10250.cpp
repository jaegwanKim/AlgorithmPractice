#include <iostream>
using namespace std;

int main()
{
    int t;
    int h, w, n;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> h >> w >> n;
        int f, r;

        f = n % h;
        r = n / h + 1;
        if (f == 0)
        {
            f = h;
            r--;
        }

        cout << f * 100 + r << endl;
    }
}