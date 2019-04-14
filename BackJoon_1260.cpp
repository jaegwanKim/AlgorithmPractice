#include <iostream>
#include <array>
#include <queue>

using namespace std;
#define MAX 1001

int n, m, v;
array<array<int, MAX>, MAX> map;
array<int, MAX> nodeArr = {
    0,
};
void dfs(int i)
{
    int node = i;
    if (nodeArr[node] == 0)
    {
        nodeArr[node] = 1;
        cout << node << " ";
        for (int i = 1; i <= n; i++)
        {
            if (map[node][i] == 1)
            {
                dfs(i);
            }
        }
    }
}
void bfs(queue<int> &q)
{
    int node;
    while (!q.empty())
    {
        node = q.front();
        q.pop();
        if (nodeArr[node] == 0)
        {
            nodeArr[node] = 1;
            cout << node << " ";
            for (int i = 1; i <= n; i++)
            {
                if (map[node][i] == 1)
                {
                    q.push(i);
                }
            }
        }
    }
}
int main()
{

    for (int i = 0; i < MAX; i++)
    {
        for (int j = 0; j < MAX; j++)
        {
            map[i][j] = 0;
        }
    }
    cin >> n >> m >> v;
    int x, y;
    for (int i = 0; i < m; i++)
    {
        cin >> x >> y;
        map[x][y] = 1;
        map[y][x] = 1;
    }
    dfs(v);
    for (int i = 1; i <= n; i++)
    {
        nodeArr[i] = 0;
    }
    queue<int> q;
    cout << endl;
    q.push(v);
    bfs(q);
    return 0;
}