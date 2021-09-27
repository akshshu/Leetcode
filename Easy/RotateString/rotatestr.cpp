
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool rotateString(string s, string goal)
    {
        if (s.size() != goal.size())
            return false;
        for (int i = 0; i < s.size(); i++)
        {
            int count = 0;
            for (int j = 0; j < s.size(); j++)
            {
                if (s[(j + i) % s.size()] == goal[j])
                    count++;
            }
            if (count == s.size())
                return true;
        }
        return false;
    }
};
int main()
{
    Solution s;
    auto ans = s.func();
    return 0;
}
