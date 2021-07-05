
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<vector<int>> ans;
    void recurs(int i, int step, vector<int> &storage, int n)
    {
        if (step == 0)
        {
            ans.push_back(storage);
            return;
        }
        for (size_t j = i; j <= n; j++)
        {
            storage.push_back(j);
            recurs(j + 1, step - 1, storage, n);
            storage.pop_back();
        }
    }
    vector<vector<int>> combine(int n, int k)
    {
        vector<int> storage;
        recurs(1, k, storage, n);
        return ans;
    }
};
int main()
{
    Solution s;
    auto ans = s.combine(4, 2);
    return 0;
}
