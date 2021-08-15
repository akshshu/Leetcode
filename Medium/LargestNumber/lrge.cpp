
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    static bool comparator(string &a, string &b)
    {
        string x = a + b;
        string y = b + a;
        return x > y;
    }
    string largestNumber(vector<int> &nums)
    {
        vector<string> numscopy;
        for (int x : nums)
            numscopy.push_back(to_string(x));
        sort(numscopy.begin(), numscopy.end(), comparator);
        string ans = "";
        if (numscopy[0] == "0")
            return "0";
        for (string &x : numscopy)
            ans += x;
        return ans;
    }
};
int main()
{
    Solution s;
    vector<int> nums = {1, 20, 3, 30, 23, 2, 34};
    auto ans = s.largestNumber(nums);
    return 0;
}
