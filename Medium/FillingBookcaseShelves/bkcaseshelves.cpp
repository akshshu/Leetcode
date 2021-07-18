
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int recurs(vector<vector<int>> &books, vector<vector<int>> &dp, int currIndex, int currWdth, int currHeight, int shelf_width)
    {
        if (currIndex > books.size() - 1)
            return currHeight;
        if (books[currIndex][0] + currWdth > shelf_width)
            return INT_MAX;
        if (dp[currIndex][currWdth] != -1)
            return dp[currIndex][currWdth];
        int maxHeight = max(currHeight, books[currIndex][1]);
        dp[currIndex][currWdth] = min(recurs(books, dp, currIndex + 1, books[currIndex][0] + currWdth, maxHeight, shelf_width), maxHeight + recurs(books, dp, currIndex + 1, 0, 0, shelf_width));
        return dp[currIndex][currWdth];
    }
    int minHeightShelves(vector<vector<int>> &books, int shelf_width)
    {
        vector<vector<int>> dp(books.size(), vector<int>(shelf_width, -1));
        return recurs(books, dp, 0, 0, 0, shelf_width);
    }
};

int main()
{
    Solution s;
    vector<vector<int>> books = {{1, 1}, {2, 3}, {2, 3}, {1, 1}, {1, 1}, {1, 1}, {1, 2}};
    int shelf_width = 4;
    auto ans = s.minHeightShelves(books, shelf_width);
    return 0;
}
