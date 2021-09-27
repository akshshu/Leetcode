
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    void dfs(int curr, int n, vector<int> &ans)
    {
        if (curr > n)
            return;
        int limit = curr + 9;
        while (curr <= limit and curr <= n)
        {
            if (curr != 0)
            {
                ans.push_back(curr);
                dfs(curr * 10, n, ans);
            }
            curr++;
        }
    }
    vector<int> lexicalOrder(int n)
    {
        vector<int> ans;
        dfs(0, n, ans);
        return ans;
    }
};
int main()
{
    Solution s;
    auto ans = s.func();
    return 0;
}
