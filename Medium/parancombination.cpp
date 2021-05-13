// Given n pairs of parentheses, write a function to generate all combinations of well - formed parentheses.

class Solution
{
public:
    vector<string> ans;
    void recurs(string jk, int open, int close, int n)
    {
        if (open == n)
        {
            while (close < open)
            {
                jk += ")";
                close++;
            }
            ans.push_back(jk);
            return;
        }
        else if (open == close)
        {
            recurs(jk + "(", open + 1, close, n);
        }
        else
        {
            recurs(jk + "(", open + 1, close, n);
            recurs(jk + ")", open, close + 1, n);
        }
    }
    vector<string> generateParenthesis(int n)
    {
        string jk = "(";
        recurs(jk, 1, 0, n);
        return ans;
    }
};