#include <iostream>

using namespace std;

int main()
{

    int temp;
    int total = 0;

    for (int i = 0; i < 5; i++)
    {
        cin >> temp;
        if (temp < 40)
        {
            total += 40;
        }
        else
        {
            total += temp;
        }
    }

    cout << total / 5;

    return 0;
}