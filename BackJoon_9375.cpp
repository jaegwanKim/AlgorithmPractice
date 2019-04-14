#include <string>
#include <iostream>
#include <vector>
using namespace std;

int isContained(vector<string> &k, string &str)
{
    int ret = -1;
    for (int i = 0; i < k.size(); i++)
    {
        if (k[i] == str)
        {
            ret = i;
            break;
        }
    }
    return ret;
}
int main()
{

    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int cnt;
        cin >> cnt;
        vector<string> kinds;
        vector<int> num;
        string temp;
        string kind;
        int index;
        int ans = 1;
        for (int j = 0; j < cnt; j++)
        {
            cin >> temp >> kind;
            index = isContained(kinds, kind);
            if (index == -1)
            {
                kinds.push_back(kind);
                num.push_back(2);//value + none
            }
            else
            {
                num[index]++;
            }
        }
        for(int v :num)
        {
            ans *= v;
        }
        cout <<ans-1<<endl;
    }
    return 0;
}