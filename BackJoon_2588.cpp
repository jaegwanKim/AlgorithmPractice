#include <iostream>

using namespace std;

int main()
{
    int first = 0;
    string second = "";
    cin >>first >> second;

    cout << first * (second[2]-'0') << endl;
    cout << first * (second[1]-'0') << endl;
    cout << first * (second[0]-'0') << endl;
    cout << first * stoi(second);
    
    return 0;
}

