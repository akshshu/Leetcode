
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    void rotate(vector<vector<int>> &matrix)
    {
        int m = matrix.size() - 1;
        for (int i = 0; i < matrix.size() / 2; i++)
        {
            for (int j = i; j < m; j++)
            {
                int temp = matrix[i][j];
                int row = j;
                int col = matrix.size() - 1 - i;
                for (int k = 0; k < 4; k++)
                {
                    swap(temp, matrix[row][col]);
                    swap(row, col);
                    col = matrix.size() - 1 - col;
                }
            }
            m--;
        }
    }
};
int main()
{
    Solution s;
    vector<vector<int>> matrix{
        {5, 1, 9, 11}, {2, 4, 8, 10}, {13, 3, 6, 7}, {15, 14, 12, 16}};
    s.rotate(matrix);
    for (auto x : matrix)
    {
        for (auto y : x)
        {
            cout << y << " ";
        }
        cout << endl;
    }
    return 0;
}
