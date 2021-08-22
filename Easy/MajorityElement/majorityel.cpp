
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        int number = 0;
        int j = 1;
        int count = 0;
        for (int i = 0; i < 32; i++)
        {
            for (int x : nums)
                if (x & (j))
                    count++;
            if (count > nums.size() / 2)
                number += j;
            count = 0;
            if (i < 31)
                j = j << 1;
        }
        count = 0;
        for (int x : nums)
            if (number == x)
                count++;
        if (count > nums.size() / 2)
            return number;
        return -1;
    }
};
int main()
{
    Solution s;
    vector<int> nums = {3, 2, 2};
    auto ans = s.majorityElement(nums);
    return 0;
}
