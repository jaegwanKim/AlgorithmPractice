#include <iostream>
using namespace std;

int main()
{

int index =0;
int max = -1;
int temp;
    for(int i =1;i<=9;i++)
    {  
        cin >> temp;
        if(temp > max)
        {
            max = temp;
            index = i;
        }
    }
    cout << max<<endl<<index<<endl;
}