
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int maxTurbulenceSize(vector<int> &arr)
    {
        int ans = 0;
        int temp = 0;
        for (int i = 0; i < arr.size() - 1; i++)
        {
            if (i % 2)
            {
                if (arr[i] > arr[i + 1])
                    temp++;
                else
                {
                    ans = max(temp + 1, ans);
                    temp = 0;
                }
            }
            else
            {
                if (arr[i] < arr[i + 1])
                    temp++;
                else
                {
                    ans = max(temp + 1, ans);
                    temp = 0;
                }
            }
        }
        ans = max(temp + 1, ans);
        temp = 0;
        for (int i = 0; i < arr.size() - 1; i++)
        {
            if (i % 2 == 0)
            {
                if (arr[i] > arr[i + 1])
                    temp++;
                else
                {
                    ans = max(temp + 1, ans);
                    temp = 0;
                }
            }
            else
            {
                if (arr[i] < arr[i + 1])
                    temp++;
                else
                {
                    ans = max(temp + 1, ans);
                    temp = 0;
                }
            }
        }
        return max(temp + 1, ans);
    }
};
int main()
{
    Solution s;
    vector<int> arr = {9, 4, 2, 10, 7, 8, 8, 1, 9};
    auto ans = s.maxTurbulenceSize(arr);
    return 0;
}
