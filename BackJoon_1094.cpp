#include <iostream>
#include <deque>
using namespace std;

int main()
{
    int x;
    int total = 64;
    deque<int> stick;
    stick.push_back(64);
    cin >> x;

    while (total > x)
    {
        int shortest = stick.front() / 2;
        stick.pop_front();
        if ((total - shortest) >= x)
        {
            total -= shortest;
            stick.push_front(shortest);
        }
        else
        {
            stick.push_front(shortest);
            stick.push_front(shortest);
        }
    }
    cout << stick.size() << endl;

    return 0;
}
