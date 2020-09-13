#include <string>
#include <vector>
#include <stack>
using namespace std;
int tryCatch(vector<vector<int>> &board, const int &move)
{
    int ret = 0;
    if (move < 0 || move >= board.size())
    {
        return ret;
    }

    for (int i = 0; i < board.size(); i++)
    {
        if (board[i][move] != 0)
        {
            ret = board[i][move];
            board[i][move] = 0;
            break;
        }
    }
    return ret;
}
void check(stack<int> &stored, const int &input, int &disapper)
{
    if(input == 0)
    {
        return ;
    }

    if (!stored.empty())
    {
        if (stored.top() == input)
        {
            stored.pop();
            disapper += 2;
            return ;
        }
    }
    stored.push(input);
    return;
}

int solution(vector<vector<int>> board, vector<int> moves)
{
    int answer = 0;

    stack<int> stored;
    int catched = 0;
    for (int i = 0; i < moves.size(); i++)
    {
        catched = tryCatch(board, moves[i]);    
        check(stored, catched, answer);
    }
    return answer;
}