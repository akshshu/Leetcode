
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool searchMatrix(vector<vector<int>> &matrix, int target)
    {
        int n = matrix[0].size() - 1;
        int low = 0, high = matrix.size() - 1;

        while (low <= high)
        {
            int mid = low + (high - low) / 2;
            if (matrix[mid][0] <= target && matrix[mid][n] >= target)
            {
                low = 0;
                high = n;
                while (low <= high)
                {
                    int mid2 = low + (high - low) / 2;
                    if (matrix[mid][mid2] == target)
                        return true;
                    else if (matrix[mid][mid2] < target)
                        low = mid2 + 1;
                    else
                        high = mid2 - 1;
                }
                return false;
            }
            else if (matrix[mid][0] > target)
                high = mid - 1;
            else if (matrix[mid][n] < target)
                low = mid + 1;
            else
                return false;
        }
        return false;
    }
};
int main()
{
    Solution s;
    vector<vector<int>> matrix{{1, 3, 5, 7}, {10, 11, 16, 20}, {23, 30, 34, 60}};
    auto ans = s.searchMatrix(matrix, 3);
    cout << ans;
    return 0;
}
