#include <iostream>
#include <array>
using namespace std;
array<array<int, 15>, 15> apart;

int getNum(int k, int n)
{
    if (apart[k][n] != 0)
    {
        return apart[k][n];
    }
    if (n == 1)
    {
        return getNum(k - 1, n);
    }
    else
    {
        return getNum(k - 1, n) + getNum(k, n - 1);
    }
}
int main()
{
    int t;
    cin >> t;
    int k, n;
    for (int i = 0; i < 15; i++)
    {
        apart[0][i] = i;
    }
    for (int i = 1; i < 15; i++)
    {
        for (int j = 0; j < 15; j++)
        {
            apart[i][j] = 0;
        }
    }
    for (int i = 0; i < t; i++)
    {

        cin >> k >> n;
        cout << getNum(k, n) << endl;
    }
    return 0;
}