#include <iostream>
#include <deque>
#include <string>
using namespace std;

int main()
{
    int t;
    string cmd;
    cin >> t;
    int val;
    int ret;
    deque<int> d;
    for (int i = 0; i < t; i++)
    {
        cin >> cmd;

        if (cmd == "push_front")
        {
            cin >> val;
            d.push_front(val);
            continue;
        }
        else if (cmd == "push_back")
        {
            cin >> val;
            d.push_back(val);
            continue;
        }
        else if (cmd == "pop_front")
        {
            if (d.empty())
            {
                ret =-1;
            }
            else
            {
               ret = d.front();
                d.pop_front();
            }
        }
        else if (cmd == "pop_back")
        {
            if (d.empty())
            {
                ret =  -1;
            }
            else
            {
                ret =  d.back();
                d.pop_back();
            }
        }
        else if (cmd == "size")
        {
            ret =  d.size();
        }
        else if (cmd == "empty")
        {
            ret = d.empty();
        }
        else if (cmd == "front")
        {
            if (d.empty())
            {
                ret =  -1;
            }
            else
            {
                ret = d.front();
            }
        }
        else if (cmd == "back")
        {
            if (d.empty())
            {
                ret =  -1;
            }
            else
            {
                ret = d.back();
            }
        }
        cout << ret <<endl;
    }

    return 0;
}