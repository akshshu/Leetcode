
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    static bool customSort(vector<int> &a, vector<int> &b)
    {
        return b[1] > a[1];
    }
    int findLongestChain(vector<vector<int>> &pairs)
    {
        sort(pairs.begin(), pairs.end(), customSort);
        int count = 0;
        int temp = INT_MIN;
        for (int i = 0; i < pairs.size(); i++)
        {
            if (pairs[i][0] > temp)
            {
                count++;
                temp = pairs[i][1];
            }
        }
        return count;
    }
};
int main()
{
    Solution s;
    vector<vector<int>> pairs = {{1, 2}, {2, 3}, {3, 4}};
    auto ans = s.findLongestChain(pairs);
    return 0;
}
