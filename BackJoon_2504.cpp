#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main()
{
    stack<int> s;
    string str;
    int ret = 0;
    cin >> str;
    char c;
    bool flag = false;
    for (int i = 0; i < str.size(); i++)
    {
        c = str[i];
        if (c == '[' || c == '(')
        {
            s.push(c);
        }
        else if (c == ']')
        {
            int temp = 1;
            while (true)
            {
                if (s.empty() || s.top() == '(')
                {

                    cout << 0;
                    return 0;
                }
                if (s.top() != '[')
                {
                    temp *= s.top();
                    s.pop();
                }
                else
                {
                    temp *= 3;
                    s.pop();
                    flag = true;
                    break;
                }
            }
            s.push(temp);
        }
        else if (c == ')')
        {
            int temp = 1;
            while (true)
            {
                if (s.empty() || s.top() == '[')
                {

                    cout << 0;
                    return 0;
                }
                if (s.top() != '(')
                {
                    temp *= s.top();
                    s.pop();
                }
                else
                {
                    temp *= 2;
                    s.pop();
                    flag = true;

                    break;
                }
            }
            s.push(temp);
        }
        else
        {
            cout << 0;
            return 0;
        }
        if (flag)
        {
            int temp = 0;
            while (!s.empty())
            {
                if (s.top() != '[' && s.top() != '(')
                {
                    temp += s.top();
                    s.pop();
                }
                else
                {
                    break;
                }
            }
            s.push(temp);
            flag = false;
        }
    }
    while (!s.empty())
    {
        if (s.top() == '[' || s.top() == '(')
        {
            cout << 0;
            return 0;
        }
        ret += s.top();
        s.pop();
    }
    cout << ret;
    return 0;
}
