#include <string>
#include <vector>

using namespace std;
void check(const vector<vector<int>> &possible, vector<int> &rets, int index, byte current)
{
    if (index == possible.size())
    {
        for (int i = 0; i < rets.size(); i++)
        {
            if ((rets[i] ^ current) == 0)
            {
                return;
            }
        }
        rets.push_back(current);
        return;
    }

    for (int i = 0; i < possible[index].size(); i++)
    {
        int temp = 1 << possible[index][i];
        if ((current & temp) == 0) // index is empty
        {
            check(possible, rets, index + 1, (current | temp));
        }
    }
}

int solution(vector<string> user_id, vector<string> banned_id)
{
    int answer = 0;

    vector<vector<int>> possible;
    vector<int> rets;

    possible.resize(banned_id.size());

    for (int i = 0; i < banned_id.size(); i++)
    {
        string target = banned_id[i];
        for (int j = 0; j < user_id.size(); j++)
        {
            if (target.length() != user_id[j].length())
            {
                continue;
            }
            int tempIndex = 0;
            while (tempIndex < target.length())
            {
                if (target[tempIndex] != user_id[j][tempIndex])
                {
                    if (target[tempIndex] != '*')
                    {
                        break;
                    }
                }
                tempIndex++;
            }

            if (tempIndex == target.length())
            {
                possible[i].push_back(j);
            }
        }
    }
    check(possible, rets, 0, 0);
    answer = rets.size();

    return answer;
}