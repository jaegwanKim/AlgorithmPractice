#include <array>
#include <iostream>
using namespace std;

int main()
{

    array<int,8> compare = {1,2,3,4,5,6,7,8};

    int temp;
    bool isAsc = true;
    bool isDesc = true;
    for(int i=0;i<8;i++){
        
        cin>>temp;
        if(isAsc&&compare[i]!=temp){
            isAsc = false;
        }
        if(isDesc&&compare[7-i]!=temp){
            isDesc = false;
        }
    }
    if(isAsc){
        cout << "ascending" <<endl;
    }else if(isDesc){
        cout << "descending" << endl;
    }else{
        cout << "mixed"<<endl;
    }

    return 0;
}