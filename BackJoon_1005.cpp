#include <iostream>
using namespace std;

#define MAX 1001

long build[MAX];
long btime[MAX];
long map[MAX][MAX];
long n;
long k;
long destination;
long check(int d)
{
    if (btime[d] == -1)
    {
        long max = 0;
        long temp;
        for (int i = 1; i <= n; i++)
        {
            if (map[i][d] == 1)
            {
                temp = check(i);
                if (max < temp)
                {
                    max = temp;
                }
            }
        }

        btime[d] = max + build[d];
    }
    return btime[d];
}
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {

        cin >> n >> k;
        for (int q = 0; q < MAX; q++)
        {
            for (int w = 0; w < MAX; w++)
            {
                map[q][w] = 0;
            }
        }
        for (int q = 1; q <= n; q++)
        {
            cin >> build[q];
            btime[q] = -1;
        }
        int from, to;
        for (int q = 1; q <= k; q++)
        {
            cin >> from >> to;
            map[from][to] = 1;
        }
        cin >> destination;

        cout << check(destination) << endl;
    }

    return 0;
}