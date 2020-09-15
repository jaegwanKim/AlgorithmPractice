#include <string>
#include <vector>
#include <map>
#include <iostream>
using namespace std;
void convert(string s, vector<int> &target)
{
    string delimiter = ",";
    size_t pos = 0;
    string token;
    while ((pos = s.find(delimiter)) != std::string::npos)
    {
        token = s.substr(0, pos);
        target.push_back(stoi(token));
        s.erase(0, pos + delimiter.length());
    }
    target.push_back(stoi(s));
}
void setInMap(string s, map<int, vector<int>> &temp)
{
    vector<int> tempArr;
    convert(s.substr(1, s.size() - 2), tempArr);
    temp.insert(make_pair(tempArr.size(), tempArr));
}
void parsing(string s, map<int, vector<int> >&temp)
{
    string delimiter = "},";
    size_t pos = 0;
    std::string token;
    string ret = "";
    int max = 0;
    while ((pos = s.find(delimiter)) != std::string::npos)
    {
        token = s.substr(0, pos + 1);
        setInMap(token,temp);
        s.erase(0, pos + delimiter.length());
    }
    setInMap(s,temp);
}


vector<int> solution(string s)
{
    vector<int> answer;
    map<int, vector<int>> tempMap;
    parsing(s.substr(1, s.size() - 2),tempMap);
    auto it = tempMap.begin();
    while(it != tempMap.end())
    {
        for(int i=0;i<it->second.size();i++)
        {
            bool flag = true;
            for(int j = 0;j<answer.size();j++)
            {
                if(it->second[i]==answer[j])
                {
                    flag = false;
                    break;
                }
            }

            if(flag)
            {
                answer.push_back(it->second[i]);
            }
        }
        it++;
    }
    
    //convert(ret.substr(1, ret.size() - 2), answer);
    return answer;
}
int main()
{
    string test = "{{2},{2,1},{2,1,3},{2,1,3,4}}";
    //cin>> test;
    solution(test);
    return 0;
}