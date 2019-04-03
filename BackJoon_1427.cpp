#include <string>
#include <algorithm>
#include <iostream>
using namespace std;

int main()
{
    string str;
    cin >> str;

    sort(str.begin(), str.end(), [](char &a, char &b) { return a > b; });
    cout << str;
}