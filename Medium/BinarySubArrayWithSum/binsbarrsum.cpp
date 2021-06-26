
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int numSubarraysWithSum(vector<int> &nums, int goal)
    {
        int ans = 0;
        int countSofar = 0;
        if (goal == 0) //sum of k consecutive zeroes in subarray
        {
            for (int num : nums)
            {
                if (num == 1)
                    countSofar = 0;
                else
                    ans = ans + (++countSofar);
                //can do as n(n+1)/2 as well ...think!!
            }
        }
        else
        {
            int zerobefore = 1; //totalnum of Consec zeroes before subarray
            int zeroafter = 1;  //total num of Consec zeroes after subarray
            int sum = 0;
            int firstOne = INT_MAX; //1's first position in subarray
            bool oneOcc = false;    //boolean var to check if 1 has already occured so that zerobefore is not incremented
            int i = 0;
            while (i < nums.size())
            {
                sum += nums[i];
                if (nums[i] == 1)
                {
                    firstOne = min(firstOne, i);
                    oneOcc = true;
                }
                if (sum == goal)
                {
                    int j = i + 1;
                    while (j < nums.size() && nums[j] == 0)
                    {
                        zeroafter++;
                        j++;
                    }
                    ans += (zerobefore * zeroafter);
                    //reset values
                    zerobefore = 1;
                    zeroafter = 1;
                    sum = sum - 1;
                    firstOne = firstOne + 1;
                    //move till next 1 or current j,
                    while (firstOne < j && nums[firstOne] == 0)
                    {
                        firstOne++;
                        zerobefore++;
                    }
                    if (!sum) //guarantees that no new 1 has occured
                    {
                        firstOne = INT_MAX;
                        oneOcc = false;
                    }
                }
                else if (nums[i] == 0 && !oneOcc)
                    zerobefore++;
                i++;
            }
        }
        return ans;
    }
};

int main()
{
    Solution s;
    vector<int> nums = {0, 0, 0, 0, 0};
    auto ans = s.numSubarraysWithSum(nums, 0);
    cout << ans;
    return 0;
}
