#include <iostream>
#include <string>

using namespace std;

int main()
{

    int t;
    cin >> t;
    string temp;
    for (int i = 0; i < t; i++)
    {
        cin >> temp;
        int s = 0;
        for (int j = 0; j < temp.size(); j++)
        {
            if (temp[j] == '(')
            {
                s++;
            }
            else if(temp[j]==')')
            {
                s--;
            }else{
                //do nothing
            }
            if(s<0){
                break;
            }
        }
        if (s == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
