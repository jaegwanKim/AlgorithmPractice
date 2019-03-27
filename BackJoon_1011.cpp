#include <iostream>
#include <array>
using namespace std;
bool check(int front, int rear, int fl)
{
    int distance = rear - front;
    if (fl + 1 <= distance)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{

    int t, x, y;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> x >> y;
        int front = 0;
        int fl = 1;
        int rl = 1;
        int rear = y - x;
        int count = 0;
        while (true)
        {
            front += fl;
            count++;
            if (front >= rear)
            {
                break;
            }
            rear -= rl;
            count++;
            if (front >= rear)
            {
                break;
            }
            if (check(front, rear, fl))
            {
                fl++;
                rl++;
            }
            else
            {
                count++;
                break;
            }
   
        }
        cout << count << endl;
    }

    return 0;
}