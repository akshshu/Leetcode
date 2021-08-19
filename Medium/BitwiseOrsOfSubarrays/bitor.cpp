
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int subarrayBitwiseORs(vector<int> &arr)
    {
        unordered_set<int> res, cur;
        for (int i : arr)
        {
            unordered_set<int> tmp = {i};
            for (int j : cur)
                tmp.insert(i | j);
            cur = tmp;
            for (int j : cur)
                res.insert(j);
        }
        return res.size();
    }
};
int main()
{
    Solution s;
    vector<int> nums = {1, 1, 2};
    auto ans = s.subarrayBitwiseORs(nums);
    return 0;
}
