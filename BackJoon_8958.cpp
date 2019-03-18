#include <iostream>
#include <string>

using namespace std;

int main()
{

    string temp;
    int N;

    cin >> N;

    for (int i = 0; i < N; i++)
    {
        cin >> temp;
        int tempScore = 0;
        int totalScore = 0;
        for (int j = 0; j < temp.size(); j++)
        {
            if (temp[j] == 'O')
            {
                tempScore++;
            }
            else
            {
                tempScore = 0;
            }
            totalScore += tempScore;
        }
        cout << totalScore << endl;
    }
}