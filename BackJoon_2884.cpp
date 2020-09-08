#include <iostream>

using namespace std;

int main()
{

    int h,m;
    int temp;
    cin >> h >> m;
    temp = h*60 + m -45;

    if(temp < 0)
    {
        temp = 24*60 + temp;
    }

    cout << temp / 60 <<" "<< temp%60 ;
}