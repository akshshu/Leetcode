
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    /**
     * @param nums: a list of integer
     * @return: return a integer, denote  the maximum number of consecutive 1s
     */
    int findMaxConsecutiveOnes(vector<int> &nums)
    {
        int maxNum = 0;
        int j = 0;
        int k = 1;
        int size = nums.size();
        int i = 0;
        while (i < size)
        {
            if (nums[i] == 0)
            {
                if (k == 0)
                    while (nums[j++] != 0)
                        ;
                else
                    k--;
            }
            if (i - j + 1 > maxNum)
                maxNum = i - j + 1;
            i++;
        }
        return maxNum;
    }
};
int main()
{
    Solution s;
    auto ans = s.func();
    return 0;
}
