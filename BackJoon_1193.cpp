#include <iostream>

using namespace std;

int calN(int x)
{
    /*
 find place of x using n(n+1)/2 
 it return previous number which has x
 we can calculate how far is x from n 
 */

    int tempN = 1;
    int prev, next;
    int tempX = x * 2;
    prev = 0;
    next = tempN * (tempN + 1);
    while (true)
    {
        prev = next;
        next = (tempN + 1) * (tempN + 2);
        if (tempX > prev && tempX <= next)
        {
            break;
        }
        tempN++;
    }
    return tempN;
}
int main()
{

    int x;
    int n = 0;
    int fromN;
    cin >> x;
    if (x == 1) //exceoption handling
    {
        cout << 1 << "/" << 1;
        return 0;
    }
    n = calN(x);

    fromN = x - ((n * (n + 1)) / 2);

    if (n % 2 == 1) //direction checking
    {
        cout << fromN << "/" << (n + 2 - fromN);
    }
    else
    {
        cout << (n + 2 - fromN) << "/" << fromN;
    }
    return 0;
}