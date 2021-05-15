
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool isValidSudoku(vector<vector<char>> &board)
    {
        vector<vector<int>> rowcheck(9, vector<int>(9, 0));
        vector<vector<int>> colcheck(9, vector<int>(9, 0));
        vector<vector<int>> boxcheck(9, vector<int>(9, 0));
        int boxno;
        for (int i = 0; i < 9; i++)
        {
            boxno = ((i / 3) * 3) - 1;

            for (int j = 0; j < 9; j++)
            {
                if (j % 3 == 0)
                {
                    boxno++;
                }
                if (board[i][j] != '.')
                {
                    if (rowcheck[i][((int)board[i][j]) - 49] == 0 && colcheck[j][((int)board[i][j]) - 49] == 0 && boxcheck[boxno][((int)board[i][j]) - 49] == 0)
                    {
                        rowcheck[i][((int)board[i][j]) - 49] = 1;
                        colcheck[j][((int)board[i][j]) - 49] = 1;
                        boxcheck[boxno][((int)board[i][j]) - 49] = 1;
                    }
                    else
                        return false;
                }
            }
        }
        return true;
    }
};
// using less space commented below
// class Solution
// {
// public:
//     bool isValidSudoku(vector<vector<char>> &board)
//     {
//         vector<vector<int>> rowcheck(18, vector<int>(9, 0));
//         // vector<vector<int>> colcheck(9, vector<int>(9, 0));        
//         int boxno;
//         for (int i = 0; i < 9; i++)
//         {
//             for (int j = 0; j < 9; j++)
//             { 
//                 if (board[i][j] != '.')
//                 {
//                     if (rowcheck[i][(int)board[i][j] - 49] == 0 && rowcheck[j+9][(int)board[i][j] - 49] == 0)
//                     {
//                         rowcheck[i][(int)board[i][j] - 49] = 1;
//                         rowcheck[j+9][(int)board[i][j] - 49] = 1;
//                     }
//                     else
//                         return false;
//                 }
//             }
//         }
//         // Reusing the 2dvector.
//          for (auto &v : rowcheck)
//         {
//             fill(v.begin(), v.end(), 0);
//         }
//         for (int i = 0; i < 9; i++)
//         {
//             boxno = ((i / 3) * 3) - 1;
//             for (int j = 0; j < 9; j++)
//             {
//                 if (j % 3 == 0)
//                     boxno++;
//                 if (board[i][j] != '.')
//                 {
//                     if (rowcheck[boxno][(int)board[i][j] - 49] == 0)
//                         rowcheck[boxno][(int)board[i][j] - 49] = 1;
//                     else
//                         return false;
//                 }
//             }
//         }
//         return true;
//     }
// };
int main()
{
    Solution s;
    vector<vector<char>> board{
        {'5', '3', '.', '.', '7', '.', '.', '.', '.'},
        {'6', '.', '.', '1', '9', '5', '.', '.', '.'},
        {'.', '9', '8', '.', '.', '.', '.', '6', '.'},
        {'8', '.', '.', '.', '6', '.', '.', '.', '3'},
        {'4', '.', '.', '8', '.', '3', '.', '.', '1'},
        {'7', '.', '.', '.', '2', '.', '.', '.', '6'},
        {'.', '6', '.', '.', '.', '.', '2', '8', '.'},
        {'.', '.', '.', '4', '1', '9', '.', '.', '5'},
        {'.', '.', '.', '.', '8', '.', '.', '7', '9'}};
    auto ans = s.isValidSudoku(board);
    return 0;
}
