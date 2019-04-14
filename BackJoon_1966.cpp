#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
struct doc
{
    int p = 0;
    bool target = false;
};
int main()
{

    int t;
    cin >> t;
    int n, m;

    for (int i = 0; i < t; i++)
    {
        cin >> n >> m;
        vector<doc> q;

        for (int i = 0; i < n; i++)
        {
            doc temp;
            cin >> temp.p;
            if (i == m)
            {

                temp.target = true;
                //cout << temp.p << " is target " << temp.target << endl;
            }
            q.push_back(temp);
        }
        int front = 0;
        int rear = n - 1;
        int ret = 1;
        while (true)
        {
            auto mv = max_element(q.begin(), q.end(), [](doc &a, doc &b) {
                return a.p < b.p;
            });
            //cout << "front is " << q[front].p << " / rear is " << q[rear].p << endl;
            //cout << "max is" << mv->p << endl;
            if (q[front].p < (mv->p))
            {

                bool frontF = true;
                bool rearF = true;
                while ((frontF || rearF))
                {
                    if (rearF)
                    {
                        rear++;
                        if (rear >= n)
                        {
                            rear = 0;
                        }
                        if (q[front].p != 0)
                        {
                            rearF = false;
                        }
                    }
                    if (frontF)
                    {
                        front++;
                        if (front >= n)
                        {
                            front = 0;
                        }
                        if (q[front].p != 0)
                        {
                            frontF = false;
                        }
                    }
                }
            }
            else
            {
                //cout << "Pop and push" << endl;
                if (q[front].target)
                {
                    cout << ret << endl;
                    break;
                }
                else
                {
                    ret++;
                    q[front].p =0;
                    while (true)
                    {
                        front++;
                        if (front >= n)
                        {
                            front = 0;
                        }
                        if (q[front].p != 0)
                        {
                            break;
                        }
                    }
                }
            }
        }
    }

    return 0;
}