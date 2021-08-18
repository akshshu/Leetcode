
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    void updateCount(int i, int j, int &liveCount, int &deadCount, vector<vector<int>> &board)
    {
        if (board[i][j] == 0 || board[i][j] == -2)
            deadCount++;
        else
            liveCount++;
    }
    void gameOfLife(vector<vector<int>> &board)
    {
        for (int i = 0; i < board.size(); i++)
        {
            for (int j = 0; j < board[0].size(); j++)
            {
                int liveCount = 0;
                int deadCount = 0;
                if (i - 1 >= 0)
                {
                    updateCount(i - 1, j, liveCount, deadCount, board);
                    if (j - 1 >= 0)
                        updateCount(i - 1, j - 1, liveCount, deadCount, board);
                    if (j + 1 < board[0].size())
                        updateCount(i - 1, j + 1, liveCount, deadCount, board);
                }
                if (i + 1 < board.size())
                {
                    updateCount(i + 1, j, liveCount, deadCount, board);
                    if (j - 1 >= 0)
                        updateCount(i + 1, j - 1, liveCount, deadCount, board);
                    if (j + 1 < board[0].size())
                        updateCount(i + 1, j + 1, liveCount, deadCount, board);
                }
                if (j - 1 >= 0)
                    updateCount(i, j - 1, liveCount, deadCount, board);
                if (j + 1 < board[0].size())
                    updateCount(i, j + 1, liveCount, deadCount, board);
                if (board[i][j] == 0)
                {
                    if (liveCount == 3)
                        board[i][j] = -2;
                }
                else
                {
                    if (liveCount < 2 || liveCount > 3)
                        board[i][j] = -1;
                }
            }
        }
        for (int i = 0; i < board.size(); i++)
        {
            for (int j = 0; j < board[0].size(); j++)
            {
                if (board[i][j] == -2)
                    board[i][j] = 1;
                else if (board[i][j] == -1)
                    board[i][j] = 0;
            }
        }
    }
};
int main()
{
    Solution s;
    auto ans = s.func();
    return 0;
}
