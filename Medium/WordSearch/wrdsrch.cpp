
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool helper(int i, int j, int index, vector<vector<char>> &board, string word)
    {
        if (index == word.size())
            return true;
        if (i < 0 || j < 0 || i == board.size() || j == board[0].size() || board[i][j] == '#')
            return false;
        if (word[index] != board[i][j])
            return false;
        char temp = board[i][j];
        board[i][j] = '#';
        bool a = helper(i - 1, j, index + 1, board, word);
        bool b = helper(i, j - 1, index + 1, board, word);
        bool c = helper(i + 1, j, index + 1, board, word);
        bool d = helper(i, j + 1, index + 1, board, word);
        board[i][j] = temp;
        return (a || b || c || d);
    }
    bool exist(vector<vector<char>> &board, string word)
    {
        for (int i = 0; i < board.size(); i++)
            for (int j = 0; j < board[0].size(); j++)
                if (helper(i, j, 0, board, word))
                    return true;
        return false;
    }
};
int main()
{
    Solution s;
    auto ans = s.func();
    return 0;
}
