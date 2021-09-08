
#include <bits/stdc++.h>
using namespace std;
/////////////////////////O(1) space solution O(n)time
class Solution
{
public:
    int trap(vector<int> &height)
    {
        int n = height.size();
        int left = 0;
        int right = n - 1;
        int maxLeft = INT_MIN;
        int maxRight = INT_MIN;
        int ans = 0;
        while (left <= right)
        {
            if (maxLeft < maxRight)
            {
                if (height[left] >= maxLeft)
                    maxLeft = height[left];
                else
                    ans += maxLeft - height[left];
                left++;
            }
            else
            {
                if (height[right] >= maxRight)
                    maxRight = height[right];
                else
                    ans += maxRight - height[right];
                right--;
            }
        }
        return ans;
    }
};
////////////////O(n) space and O(n)time
class Solution
{
public:
    int trap(vector<int> &height)
    {
        int n = height.size();
        vector<int> right(n);
        vector<int> left(n);
        right[n - 1] = height[n - 1];
        left[0] = height[0];
        for (int i = 1; i < n; i++)
            left[i] = max(left[i - 1], height[i]);
        for (int i = n - 2; i >= 0; i--)
            right[i] = max(right[i + 1], height[i]);
        int ans = 0;
        for (int i = 0; i < n; i++)
            ans += (min(right[i], left[i]) - height[i]);
        return ans;
    }
};
int main()
{
    Solution s;
    auto ans = s.func();
    return 0;
}
