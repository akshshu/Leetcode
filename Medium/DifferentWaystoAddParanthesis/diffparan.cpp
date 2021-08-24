
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    unordered_map<string, vector<int>> mp;
    vector<int> recurs(string expression)
    {
        vector<int> ans;
        if (mp[expression].size() > 0)
        {
            return mp[expression];
        }
        for (int i = 0; i < expression.size(); i++)
        {
            if (expression[i] == '+' || expression[i] == '-' || expression[i] == '*')
            {
                auto x = diffWaysToCompute(expression.substr(0, i));
                auto y = diffWaysToCompute(expression.substr(i + 1));
                for (int p : x)
                {
                    for (int j : y)
                    {
                        if (expression[i] == '-')
                            ans.push_back(p - j);
                        if (expression[i] == '+')
                            ans.push_back(p + j);
                        if (expression[i] == '*')
                            ans.push_back(p * j);
                        mp[expression] = ans;
                    }
                }
            }
        }
        if (ans.size() == 0)
            ans.push_back(stoi(expression));
        return ans;
    }
    vector<int> diffWaysToCompute(string expression)
    {
        return recurs(expression);
    }
};
int main()
{
    Solution s;
    string h = "2*3-4*5";
    auto ans = s.diffWaysToCompute(h);
    return 0;
}
