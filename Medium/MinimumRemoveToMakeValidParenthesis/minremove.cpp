
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    string minRemoveToMakeValid(string s)
    {
        vector<int> storage;
        int open = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '(')
                open++;
            else if (s[i] == ')')
            {
                if (open > 0)
                    open--;
                else
                    storage.push_back(i);
            }
        }
        string ans = "";
        for (int i = s.size() - 1; i >= 0; i--)
        {
            if (s[i] == '(')
            {
                if (open)
                    open--;
                else
                    ans += s[i];
            }
            else if (s[i] == ')' and !storage.empty() and i == storage.back())
                storage.pop_back();
            else
                ans += s[i];
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
int main()
{
    Solution s;
    string s1 = "lee(t(c)o)de)";
    auto ans = s.minRemoveToMakeValid(s1);
    return 0;
}
