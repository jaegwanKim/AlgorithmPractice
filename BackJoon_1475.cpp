#include <iostream>
#include <array>
using namespace std;
array<int, 10> arr = {
    0,
};
array<int, 10> numberSet = {1, 1, 1, 1, 1, 1, 0, 1, 1, 2};

int main()
{

    int num;
    cin >> num;
    int stand = 10;
    int temp;
    int ret = 0;
    if (num == 0)
    {
        cout << 1;
        return 0;
    }
    while (num != 0)
    {
        temp = num % stand;
        num /= 10;

        if (temp == 6)
        {
            temp = 9;
        }

        if (arr[temp] == 0)
        {
            ret++;
            for (int i = 0; i < 10; i++)
            {
                arr[i] += numberSet[i];
            }
        }

        arr[temp]--;
    }
    cout << ret;
    return 0;
}

#if 0//another solution

#include <iostream>
#include <array>
#include <algorithm>
using namespace std;
array<int, 10> arr = {
    0,
};

int main()
{

    int num;
    cin >> num;
    int temp;
    int ret = 0;
    if (num == 0)
    {
        cout << 1;
        return 0;
    }
    while (num != 0)
    {
        temp = num % 10;
        num /= 10;
        arr[temp]++;
    }

    arr[6] = (arr[9]+arr[6]+1)/2;
    arr[9] = 0;
    cout << *(max_element(arr.begin(),arr.end()));
    return 0;
}
#endif