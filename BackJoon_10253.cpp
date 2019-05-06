#include <iostream>

using namespace std;
int GCM(int a, int b)
{
    if (a % b == 0)
    {
        return b;
    }
    else
    {
        return GCM(b, a % b);
    }
}
int find(int a, int b)
{
    int ret = b / a;
    if (b % a != 0)
    {
        ret++;
    }
    return ret;
}
bool sub(int &a, int &b, int p)
{
    if (a == 1 && b == p)
    {
        return true;
    }
    int tempP = b * p;
    int tempC = a * p - b;
    int gcm = GCM(tempP, tempC);
    a = tempC / gcm;
    b = tempP / gcm;
    return false;
}
int main()
{
    int t;
    cin >> t;

    int a, b;
    while (t > 0)
    {
        cin >> a >> b;
        int parent;
        while (true)
        {
            parent = find(a, b);
            if (sub(a, b, parent))
            {
                cout << parent << endl;
                break;
            }
        }

        t--;
    }
    return 0;
}