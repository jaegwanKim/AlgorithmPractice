#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{

    vector<int> arr;
    arr.resize(3);
    while (true)
    {
       
        cin >> arr[0] >> arr[1] >> arr[2];

        if (!(arr[0] || arr[1] || arr[2]))
        {
            break;
        }

        sort(arr.begin(), arr.end());

        if ((arr[0] * arr[0]) + (arr[1] * arr[1]) == (arr[2] * arr[2]))
        {
            cout << "right" << endl;
        }
        else
        {
            cout << "wrong" << endl;
        }
    }
    return 0;
}