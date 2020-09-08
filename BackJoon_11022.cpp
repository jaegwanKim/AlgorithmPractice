#include <iostream>

using namespace std;

int main()
{

    int count;
    cin >> count;

    int a, b;
    for (int i = 0; i < count; i++)
    {
        cin >> a >> b;
        printf("Case #%d: %d + %d = %d\n",i+1,a,b, a+b);
    }
    return 0;
}