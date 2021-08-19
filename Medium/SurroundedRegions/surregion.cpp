
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    void recurs(vector<vector<char>> &board, int i, int j)
    {
        if (i < 0 || i >= board.size() || j < 0 || j >= board[0].size())
            return;
        if (board[i][j] != '|')
            return;
        board[i][j] = 'O';
        recurs(board, i + 1, j);
        recurs(board, i - 1, j);
        recurs(board, i, j + 1);
        recurs(board, i, j - 1);
    }
    void solve(vector<vector<char>> &board)
    {
        int M = board.size();
        int N = board[0].size();
        for (int i = 0; i < M; i++)
            for (int j = 0; j < N; j++)
                if (board[i][j] == 'O')
                    board[i][j] = '|';
        for (int j = 0; j < N; j++)
        {
            if (board[0][j] == '|')
                recurs(board, 0, j);
        }
        for (int j = 0; j < N; j++)
        {
            if (board[M - 1][j] == '|')
                recurs(board, M - 1, j);
        }
        for (int j = 0; j < M; j++)
        {
            if (board[j][0] == '|')
                recurs(board, j, 0);
        }
        for (int j = 0; j < M; j++)
        {
            if (board[j][N - 1] == '|')
                recurs(board, j, N - 1);
        }
        for (int i = 0; i < M; i++)
            for (int j = 0; j < N; j++)
                if (board[i][j] == '|')
                    board[i][j] = 'X';
    }
};
int main()
{
    Solution s;
    vector<vector<char>> board = {{'X', 'X', 'X', 'X'}, {'X', 'O', 'O', 'X'}, {'X', 'X', 'O', 'X'}, {'X', 'O', 'X', 'X'}};
    s.solve(board);
    return 0;
}
