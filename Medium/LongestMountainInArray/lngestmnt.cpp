
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int longestMountain(vector<int> &arr)
    {
        int n = arr.size();
        int ans = 1;
        int ret = 0;
        bool greaterFound = true;
        for (int i = 1; i < n; i++)
        {
            if (greaterFound)
            {
                if (arr[i] == arr[i - 1])
                    ans = 1;
                else if (arr[i] < arr[i - 1])
                {
                    if (ans < 2)
                    {
                        ans = 1;
                        continue;
                    }
                    ans++;
                    ret = max(ans, ret);
                    greaterFound = false;
                }
                else
                    ans++;
            }
            else
            {
                if (arr[i] > arr[i - 1])
                {
                    ans = 2;
                    greaterFound = true;
                }
                else if (arr[i] == arr[i - 1])
                {
                    ans = 1;
                    greaterFound = true;
                }
                else
                    ans++;
                ret = max(ans, ret);
            }
        }
        return ret < 3 ? 0 : ret;
    }
};
int main()
{
    Solution s;
    auto ans = s.func();
    return 0;
}
