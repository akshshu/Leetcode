
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> maxSlidingWindow(vector<int> &nums, int k)
    {
        vector<int> ans;
        deque<int> dq;
        for (int i = 0; i < k; i++)
        {
            while (!dq.empty() and nums[dq.back()] < nums[i])
            {
                dq.pop_back();
            }
            dq.push_back(i);
        }
        ans.push_back(nums[dq.front()]);
        for (int i = k; i < nums.size(); i++)
        {
            if (dq.front() == i - k)
                dq.pop_front();
            while (!dq.empty() and nums[dq.back()] < nums[i])
            {
                dq.pop_back();
            }
            dq.push_back(i);
            ans.push_back(nums[dq.front()]);
        }
        return ans;
    }
    // vector<int> maxSlidingWindow(vector<int> &nums, int k)
    // {
    //     vector<int> ans;
    //     // deque<int>dq;
    //     priority_queue<int> dq;
    //     unordered_map<int, int> count;
    //     for (int i = 0; i < k; i++)
    //     {
    //         if (count[nums[i]] == 0)
    //             dq.push(nums[i]);
    //         count[nums[i]]++;
    //     }
    //     ans.push_back(dq.top());

    //     for (int i = k; i < nums.size(); i++)
    //     {
    //         count[nums[i - k]]--;
    //         if (count[nums[i]] == 0)
    //             dq.push(nums[i]);
    //         count[nums[i]]++;
    //         while (count[dq.top()] == 0)
    //         {
    //             dq.pop();
    //         }
    //         ans.push_back(dq.top());
    //     }
    //     return ans;
    // }
};
int main()
{
    Solution s;
    auto ans = s.func();
    return 0;
}
