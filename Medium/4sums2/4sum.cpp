
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int fourSumCount(vector<int> &nums1, vector<int> &nums2, vector<int> &nums3, vector<int> &nums4)
    {
        int ans = 0;
        unordered_map<int, int> mapping;
        for (int x : nums1)
            for (int y : nums2)
                mapping[x + y]++;
        for (int x : nums3)
            for (int y : nums4)
                ans += mapping[-(x + y)];
        return ans;
    }
};
