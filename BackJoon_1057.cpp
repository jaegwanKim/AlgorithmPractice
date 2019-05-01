#include <iostream>

using namespace std;

int main()
{

    int n;
    int round =1;
    cin >> n;
    int k, l;
    cin >> k >> l;

    while(true)
    {
        if(k%2==1)
        {
            k++;
        }
        if(l%2==1)
        {
            l++;
        }
        if(k==l)
        {
            break;
        }
        round++;

        k/=2;
        l/=2;
    }

    cout << round;
    return 0;
}