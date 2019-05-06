#include <iostream>

using namespace std;
long long n;

int numCheck(long long temp, int cnt)
{
    long long start = temp;
    long long total = 0;
    for (int i = 0; i < cnt; i++)
    {
        total += temp + i;
    }
    while (total >= n && start>=0)
    {
        if (total == n)
        {
            return start;
        }
        total -= cnt;
        start--;
    }
    return -1;
}
int main()
{

    int l;

    cin >> n;
    cin >> l;

    long long temp;
    long long start = -1;
    int cnt;
    for (cnt = l; cnt <= 100; cnt++)
    {
        temp = n / cnt;
        start = numCheck(temp,cnt);
        if(start!=-1)
        {
            break;
        }
    }
    if(start!=-1)
    {
        for(int i=0;i<cnt;i++)
        {
            cout << start + i <<" ";
        }
    }else{
        cout << -1;
    }

    return 0;
}