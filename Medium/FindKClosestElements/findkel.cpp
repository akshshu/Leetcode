
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> findClosestElements(vector<int> &arr, int k, int x)
    {
        vector<int> ans;
        int n = arr.size();
        if (x < arr[0])
        {
            for (int i = 0; i < k; i++)
                ans.push_back(arr[i]);
            return ans;
        }
        if (x > arr[n - 1])
        {
            int j = n - 1;
            while (k--)
                ans.push_back(arr[j--]);
            reverse(ans.begin(), ans.end());
            return ans;
        }
        int index = -1, index2 = -1;
        int minDiff = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            if (abs(x - arr[i]) < minDiff)
            {
                index = i;
                minDiff = abs(x - arr[i]);
            }
            else if (abs(x - arr[i]) == minDiff)
                index2 = i;
        }
        int p = k, z = k;
        int i = index, j = index + 1;
        while (k--)
        {
            int a = INT_MAX, b = INT_MAX;
            if (i >= 0)
                a = abs(x - arr[i]);
            if (j <= n - 1)
                b = abs(x - arr[j]);
            if (a <= b)
            {
                ans.push_back(arr[i]);
                i--;
            }
            else
            {
                ans.push_back(arr[j]);
                j++;
            }
        }
        sort(ans.begin(), ans.end());
        if (index2 == -1)
            return ans;
        i = index2, j = index2 + 1;
        vector<int> ans2;
        while (p--)
        {
            int a = INT_MAX, b = INT_MAX;
            if (i >= 0)
                a = abs(x - arr[i]);
            if (j <= n - 1)
                b = abs(x - arr[j]);
            if (a <= b)
            {
                ans2.push_back(arr[i]);
                i--;
            }
            else
            {
                ans2.push_back(arr[j]);
                j++;
            }
        }
        sort(ans2.begin(), ans2.end());
        int diff1 = 0, diff2 = 0;
        for (int i = 0; i < z; i++)
        {
            diff1 += abs(ans[i] - x);
            diff2 += abs(ans[i] - x);
        }
        return (diff1 <= diff2) ? ans : ans2;
    }
};
int main()
{
    Solution s;
    auto ans = s.func();
    return 0;
}
