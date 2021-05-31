
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int longestOnes(vector<int> &nums, int k)
    {

        int currNum = 0, maxNum = 0;
        int j = 0;
        int cp = k;
        int size = nums.size();
        int i = 0;
        while (i < size)
        {
            if (nums[i] == 1)
                currNum++;
            else
            {
                if (k == 0)
                {
                    while (nums[j++] != 0)
                        ;
                    currNum = i - j + 1;
                }
                else
                {
                    currNum++;
                    k--;
                }
            }
            if (currNum > maxNum)
                maxNum = currNum;
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
