#include <iostream>
using namespace std;
#define NMAX 101
#define KMAX 10001
int main()
{

    int n, k;
    cin >> n >> k;
    int nArr[NMAX];
    int kArr[KMAX] = {
        0,
    };
    for (int i = 0; i < n; i++)
    {
        cin >> nArr[i];
    }
    kArr[0] = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = nArr[i]; j <= k; j++)
        {
            kArr[j] += kArr[j - nArr[i]];
        }
    }
    cout << kArr[k];
    return 0;
}