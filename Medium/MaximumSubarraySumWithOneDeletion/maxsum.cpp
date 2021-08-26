
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int maximumSum(vector<int> &arr)
    {
        int n = arr.size();
        vector<int> leftsum(n, 0);
        vector<int> rightsum(n, 0);
        leftsum[0] = arr[0];
        for (int i = 1; i < n; i++)
            leftsum[i] = max(leftsum[i - 1] + arr[i], arr[i]);
        rightsum[n - 1] = arr[arr.size() - 1];
        for (int i = n - 2; i >= 0; i--)
            rightsum[i] = max(rightsum[i + 1] + arr[i], arr[i]);
        int ans = *max_element(leftsum.begin(), leftsum.end());
        for (int i = 1; i < n - 1; i++)
        {
            int a = 0, b = 0;
            a = leftsum[i - 1];
            b = rightsum[i + 1];
            ans = max(ans, a + b);
        }
        return ans;
    }
};
int main()
{
    Solution s;
    vector<int> arr = {1, -2, 0, 3};
    auto ans = s.maximumSum(arr);
    return 0;
}
