#include <iostream>
#include <string>

using namespace std;

int main()
{

    string buf = "";
    int a,b;
    while(getline(std::cin,buf))
    {
        cout << (buf[0]-'0') + (buf[2] - '0')<<endl;
    }

    return 0;
}