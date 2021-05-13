// #include "headers.h" header files
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool isValid(string s)
    {
        stack<char> j;
        if (s[0] != '(' && s[0] != '{' && s[0] != '[')
            return false;
        j.push(s[0]);
        for (int i = 1; i < s.size(); i++)
        {
            if (s[i] == '(' || s[i] == '{' || s[i] == '[')
                j.push(s[i]);
            else
            {
                if (j.empty())
                    return false;
                if ((s[i] == ']' && j.top() == '[') || (s[i] == '}' && j.top() == '{') || (s[i] == ')' && j.top() == '('))
                    j.pop();
                else
                    return false;
            }
        }
        return (j.empty());
    }
};
int main()
{
    Solution s;

    if (s.isValid("()"))
        cout << "valid";

    else
        cout << "Not valid";
    return 0;
}