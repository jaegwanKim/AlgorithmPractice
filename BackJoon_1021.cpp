#include <iostream>
#include <deque>
#include <vector>

using namespace std;

int main()
{
    int n, m;
    deque<int> d;
    cin >> n >> m;
    d.resize(n);
    for (int i = 0; i < n; i++)
    {
        d[i] = i + 1;
    }
    vector<int> position;

    position.resize(m);
    for (int i = 0; i < m; i++)
    {
        cin >> position[i];
    }
    int ret = 0;
    for (int i = 0; i < m; i++)
    {
  
        int target = position[i];
        if (target <= (d.size() / 2) + 1)
        {
            for (int j = 1; j < target; j++)
            {
                d.push_back(d.front());
                d.pop_front();
                ret++;
            }
            d.pop_front();
            for (int j = i + 1; j < position.size(); j++)
            {
                position[j] -= (target);
                if (position[j] <= 0)
                {
                    position[j] = d.size() + position[j] +1;
                }
            }
        }
        else
        {
            target = d.size() - target;
            for (int j = 0; j <= target; j++)
            {
                d.push_front(d.back());
                d.pop_back();
                ret++;
            }
            d.pop_front();
            for (int j = i + 1; j < position.size(); j++)
            {
                position[j] += target;
                if (position[j] > d.size())
                {
                    position[j] = position[j] - d.size() - 1;
                }
            }
        }
    }

    cout << ret;

    return 0;
}