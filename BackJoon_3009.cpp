#include <iostream>
#include <iostream>
using namespace std;

int main()
{

    int x1, y1;
    int x2, y2;
    int x3, y3;
    int xRet, yRet;
    cin >> x1 >> y1;
    cin >> x2 >> y2;
    cin >> x3 >> y3;

    if (x1 == x2)
    {
        xRet = x3;
    }
    else if (x1 == x3)
    {
        xRet = x2;
    }
    else
    {
        xRet = x1;
    }

    if (y1 == y2)
    {
        yRet = y3;
    }
    else if (y1 == y3)
    {
        yRet = y2;
    }
    else
    {
        yRet = y1;
    }
    cout << xRet << " " << yRet << endl;

    return 0;
}