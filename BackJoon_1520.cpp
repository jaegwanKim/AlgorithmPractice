#include <iostream>
using namespace std;
#define MAX 500

int m, n;
int map[MAX + 1][MAX + 1];
int val[MAX + 1][MAX + 1];
bool goodToGo(int x, int y, int stand)
{
    if (stand < map[x][y])
    {
        return true;
    }
    return false;
}
int check(int x, int y)
{
    if (val[x][y] < 0)
    {
        int stand = map[x][y];
        int whole = 0;
        if (y != n)
        {
            if (goodToGo(x, y + 1, stand))
            {
                whole += check(x, y + 1);
            }
        }
        if (y != 1)
        {
            if (goodToGo(x, y - 1, stand))
            {
                whole += check(x, y - 1);
            }
        }
        if (x != m)
        {
            if (goodToGo(x + 1, y, stand))
            {
                whole += check(x + 1, y);
            }
        }
        if (x != 1)
        {
            if (goodToGo(x - 1, y, stand))
            {
                whole += check(x - 1, y);
            }
        }
        val[x][y] = whole;
    }
    return val[x][y];
}
int main()
{

    cin >> m >> n;

    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> map[i][j];
            val[i][j] = -1;
        }
    }
    val[1][1] = 1;
    cout << check(m,n);
    return 0;
}