#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
void swap(vector<int> &a, vector<int> &b)
{
    vector<int> temp;
    temp = a;
    a = b;
    b = temp;
}
int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        vector<int> c1;
        vector<int> c2;
        int ret;
        c1.resize(3);
        c2.resize(3);

        cin >> c1[0] >> c1[1] >> c1[2];
        cin >> c2[0] >> c2[1] >> c2[2];
        bool flag = true;
        for (int j = 0; j < 3; j++)
        {
            if (c1[j] != c2[j])
            {
                flag = false;
                break;
            }
        }
        if (flag) //same
        {
            cout << -1 << endl;
            continue;
        }
        if (c1[2] > c2[2]) // c1 is smaller;
        {
            swap(c1, c2);
        }
        double dist = sqrt(pow(c1[0] - c2[0], 2) + pow(c1[1] - c2[1], 2));
  
        if (dist + c1[2] <= c2[2]) //internal
        {
            if (dist + c1[2] == c2[2])
            {
                ret = 1;
            }
            else if (dist + c1[2] > c2[2])
            {
                cout <<"here";
                ret = 2;
            }
            else if (dist + c1[2] < c2[2])
            {
                ret = 0;
            }
        }
        else // external
        {
            if (dist > c1[2] + c2[2])
            {
                ret = 0;
            }
            else if (dist < c1[2] + c2[2])
            {
                ret = 2;
            }else if(dist == c1[2] + c2[2])
            {
                ret =1;
            }
        }
        cout << ret <<endl;
    }
}