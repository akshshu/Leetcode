
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int minimumDeletions(string s)
    {
        int b_left = 0;
        int a_right = 0;
        for (int x : s)
        {
            if (x == 'a')
                a_right++;
        }
        int ans = INT_MAX;
        for (int x : s)
        {
            ans = min(ans, a_right + b_left);
            if (x == 'a')
                a_right--;
            else
                b_left++;
        }
        ans = min(ans, a_right + b_left);
        return ans;
    }
};
int main()
{
    Solution s;
    string s1 = "aababbab";
    auto ans = s.minimumDeletions(s1);
    return 0;
}
