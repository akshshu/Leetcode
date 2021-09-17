
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    string removeDuplicateLetters(string s)
    {
        string ans = "";
        unordered_map<char, int> count;
        unordered_map<char, int> included;
        for (char x : s)
            count[x]++;
        vector<char> st;
        for (char x : s)
        {
            if (included[x])
            {
                count[x]--;
                continue;
            }
            while (st.size() and st.back() > x and count[st.back()] > 0)
            {
                included[st.back()] = 0;
                st.pop_back();
            }
            st.push_back(x);
            included[x] = 1;
            count[x]--;
        }
        for (char x : st)
            ans += x;
        return ans;
    }
};
int main()
{
    Solution s;
    auto ans = s.func();
    return 0;
}
