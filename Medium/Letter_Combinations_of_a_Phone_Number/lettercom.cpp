
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<string> ans;
    vector<string> arr = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    void recurs(string digits, int i, string s)
    {
        if (i == digits.size())
        {
            ans.push_back(s);
            return;
        }
        for (int j = 0; j < arr[(int)digits[i] - 48].size(); j++)
            recurs(digits, i + 1, s + arr[(int)digits[i] - 48][j]);
    }
    vector<string> letterCombinations(string digits)
    {
        if (digits.size() == 0)
            return ans;
        recurs(digits, 0, "");
        return ans;
    }
};
int main()
{
    Solution s;
    auto ans = s.letterCombinations("239");
    return 0;
}
