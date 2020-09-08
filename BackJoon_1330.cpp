#include <iostream>

using namespace std;

int main()
{
    int a;
    int b;

    cin >> a >>b;
    string ret;
    if(a > b)
    {
        ret = ">";
    }else if(a==b)
    {
        ret = "==";
    }else
    {
        ret = "<";
    }

    cout << ret<<endl;
    
    return 0;
}