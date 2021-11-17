
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    unordered_map<string, vector<int>> mp;
    int preced(char x)
    {
        if (x == '+' || x == '-')
            return 1;
        return 2;
    }
    int getNum(string s, int &i)
    {
        string ans = "";
        while (i < s.size() and s[i] >= '0' and s[i] <= '9')
        {
            ans += s[i];
            i++;
        }

        i--;
        return stoi(ans);
    }
    vector<int> recurs(string expr)
    {
        vector<int> ans;
        if (mp[expr].size() > 0)
            return mp[expr];
        for (int i = 0; i < expr.size(); i++)
        {
            if (expr[i] == '-' || expr[i] == '*' || expr[i] == '+')
            {
                auto x = fp(expr.substr(0, i));
                auto y = fp(expr.substr(i + 1));
                for (int p : x)
                {
                    for (int k : y)
                    {
                        if (expr[i] == '-')
                            ans.push_back(p - k);
                        else if (expr[i] == '*')
                            ans.push_back(p * k);
                        else
                            ans.push_back(p + k);
                        mp[expr] = ans;
                    }
                }
            }
        }
        if (ans.size() == 0)
            ans.push_back(stoi(expr));
        return ans;
    }
    int find(string s)
    {
        stack<char> st;
        stack<int> st2;
        string ans;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] != '+' and s[i] != '*' and s[i] != '-')
            {
                int num = getNum(s, i);
                st2.push(num);
            }
            else
            {
                while (!st.empty() and preced(s[i]) <= preced(st.top()))
                {
                    int val1 = st2.top();
                    st2.pop();
                    int val2 = st2.top();
                    st2.pop();
                    char x = st.top();
                    if (x == '-')
                        st2.push(val1 - val2);
                    else if (x == '+')
                        st2.push(val1 + val2);
                    else
                        st2.push(val1 * val2);
                    st.pop();
                }
                st.push(s[i]);
            }
        }
        while (!st.empty())
        {
            int val1 = st2.top();
            st2.pop();
            int val2 = st2.top();
            st2.pop();
            char x = st.top();
            if (x == '-')
                st2.push(val2 - val1);
            else if (x == '+')
                st2.push(val1 + val2);
            else
                st2.push(val1 * val2);
            st.pop();
        }
        return st2.top();
    }

    vector<int> fp(string s)
    {
        return recurs(s);
    }
    int flipkart(string s, vector<int> &nums)
    {
        int count = 0;
        auto t = fp(s);
        for (auto x : t)
            cout << x << " ";
        int actual_ans = find(s);
        unordered_map<int, int> mp2;
        for (int x : mp[s])
        {
            mp2[x]++;
        }
        for (int x : nums)
        {
            if (mp2[x])
            {
                if (x == actual_ans)
                    count += 5;
                else
                    count -= 2;
            }
        }
        return count;
    }
};
int main()
{
    Solution s;
    string s1 = "15*4-3*2";
    vector<int> nums = {11, 54, 54, 300, -30, 0};
    auto ans = s.flipkart(s1, nums);
    cout << endl
         << ans;

    return 0;
}
