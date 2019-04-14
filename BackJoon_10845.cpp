#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);

    cin.tie(0); //cin 실행속도 향상
    int t;
    cin >> t;
    queue<int> q;
    string cmd;
    int val;
    for (int i = 0; i < t; i++)
    {
        cin >> cmd;

        if (cmd == "push")
        {
            cin >> val;
            q.push(val);
        }
        else if (cmd == "front")
        {
            if (q.empty())
            {
                cout << -1 << endl;
                continue;
            }
            cout << q.front() << endl;
        }
        else if (cmd == "back")
        {
            if (q.empty())
            {
                cout << -1 << endl;
                continue;
            }
            cout << q.back() << endl;
        }
        else if (cmd == "pop")
        {
            if (q.empty())
            {
                cout << -1 << endl;
                continue;
            }
            cout << q.front() << endl;
            q.pop();
        }
        else if (cmd == "size")
        {
            cout << q.size() << endl;
        }
        else if (cmd == "empty")
        {
            cout << q.empty() << endl;
        }
    }
    return 0;
}