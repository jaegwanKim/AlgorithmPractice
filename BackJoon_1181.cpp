#include <vector>
#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    vector<string> vec;
    int n;
    string temp;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        vec.push_back(temp);
    }

    sort(vec.begin(), vec.end(), [](string &a, string &b) {
        if (a.size() == b.size())
        {
            for (int i = 0; i < a.size(); i++)
            {
                if (a[i] == b[i])
                {
                    continue;
                }
                return a[i] < b[i];
            }
        }
        return a.size() < b.size();
    });
    temp = "";
    for (auto s : vec)
    {
        if (temp != s)
        {
            cout << s << endl;
            temp = s;
        }
    }
    return 0;
}