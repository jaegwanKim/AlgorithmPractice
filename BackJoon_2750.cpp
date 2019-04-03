#include <iostream>
#include <array>
#include <algorithm>

using namespace std;

int main()
{
    array<int, 10001> arr;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.begin() + n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}