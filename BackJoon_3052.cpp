#include <iostream>
using namespace std;

int main()
{

    bool arr[42] = {false,};
    int ret =0;
    int temp;
    for(int i=0;i<10;i++)
    {
        cin >> temp;
        if(arr[temp%42] == false)
        {
            arr[temp%42] = true;
            ret++;
        }
    }
    cout << ret;
}