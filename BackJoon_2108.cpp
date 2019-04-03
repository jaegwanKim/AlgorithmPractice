#include <iostream>
#include <array>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{

    int n;
    int sum = 0;
    array<int, 8001> arr = {
        0,
    };
    vector<int> vec;
    cin >> n;
    int temp;
    int freq = 0;
    int freqVal1 = -1;
    int freqVal2 = -1;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        sum += temp;
        vec.push_back(temp);
        arr[temp + 4000]++;
        if (freq < arr[temp + 4000])
        {
            freq = arr[temp + 4000];
            freqVal1 = temp;
            freqVal2 = temp;
        }
        else if (freq == arr[temp + 4000])
        {
            if (freqVal2 == freqVal1)
            {
                if (temp > freqVal1)
                {
                    freqVal2 = temp;
                }
                else
                {
                    freqVal1 = temp;
                }
            }
            else
            {
                if (temp < freqVal1)
                {
                    freqVal2 = freqVal1;
                    freqVal1 = temp;
                }
                else if (temp > freqVal1 && temp < freqVal2)
                {
                    freqVal2 = temp;
                }
                else
                {
                    { /* code */
                    }
                }
            }
        }
    }

    sort(vec.begin(), vec.end());
    double tempSum;
    tempSum = ((double)sum) / n;

    if (sum < 0)
    {
        tempSum -= (0.5);
    }
    else
    {
        tempSum += (0.5);
    }
    cout << (int)(tempSum) << endl
         << vec[(n / 2)] << endl
         << freqVal2 << endl
         << vec[n - 1] - vec[0];

    return 0;
}