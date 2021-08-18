
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int minAddToMakeValid(string s)
    {
        int open = 0;
        int count = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '(')
                open++;
            else
            {
                if (open == 0)
                    count++;
                else
                    open--;
            }
        }
        while (open)
        {
            count++;
            open--;
        }
        return count;
    }
};
int main()
{
    Solution s;
    string s1 = "())";
    auto ans = s.minAddToMakeValid(s1);
    return 0;
}
