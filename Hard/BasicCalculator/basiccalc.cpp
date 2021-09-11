
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int getNum(string &s, int &ind)
    {
        string x = "";
        while (ind < s.size() and s[ind] >= '0' and s[ind] <= '9')
        {
            x += s[ind];
            ind++;
        }
        int p = stoi(x);
        return p;
    }
    string spaceFree(string &sp)
    {
        string s = "";
        for (char x : sp)
        {
            if (x != ' ')
                s += x;
        }
        return s;
    }
    void stackOp(stack<int> &OPstack, stack<int> &OPRANstack)
    {
        int first = OPRANstack.top();
        OPRANstack.pop();
        int second = OPRANstack.top();
        OPRANstack.pop();
        if (OPstack.top() == '-')
            OPRANstack.push(second - first);
        if (OPstack.top() == '+')
            OPRANstack.push(second + first);
        OPstack.pop();
    }
    int calculate(string &sp)
    {
        stack<int> OPstack, OPRANstack;
        string s = spaceFree(sp);
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] >= '0' and s[i] <= '9')
            {
                int x = getNum(s, i);
                OPRANstack.push(x);
                i--;
            }
            else if (s[i] == '(')
                OPstack.push('(');
            else if (s[i] == '-')
            {
                if (OPRANstack.empty() or s[i - 1] == '(')
                    OPRANstack.push(0);
                else if (!OPstack.empty() and (OPstack.top() == '-' or OPstack.top() == '+'))
                    stackOp(OPstack, OPRANstack);
                OPstack.push('-');
            }
            else if (s[i] == '+')
            {
                if (!OPstack.empty() and (OPstack.top() == '-' or OPstack.top() == '+'))
                    stackOp(OPstack, OPRANstack);
                OPstack.push('+');
            }
            else
            {
                while (OPstack.top() != '(')
                    stackOp(OPstack, OPRANstack);
                OPstack.pop();
            }
        }
        while (!OPstack.empty())
            stackOp(OPstack, OPRANstack);
        return OPRANstack.top();
    }
};
int main()
{
    Solution s;
    string s1 = "(1+(4+5+2)-3)+(6+8)";
    auto ans = s.calculate(s1);
    return 0;
}
