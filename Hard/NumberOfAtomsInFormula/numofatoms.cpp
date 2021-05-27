
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<string> elements;
    map<string, int> ans;
    vector<int> nums;
    int makeInt(vector<string> s, int last, int start)
    {
        int p = 1;
        int num = 0;
        for (int i = last; i >= start; i--)
        {
            num += ((int)s[i][0] - 48) * p;
            p = p * 10;
        }
        return num;
    }

    void partition(string formula)
    {
        for (int i = 0; i < formula.size(); i++)
        {
            if ((int)formula[i] >= 48 && (int)formula[i] <= 57)
            {
                int j = i + 1;
                int count = 1;
                while (j < formula.size() && (int)formula[j] >= 48 && (int)formula[j] <= 57)
                {
                    j++;
                    count++;
                }
                elements.push_back(formula.substr(i, count));
                nums.push_back(atoi(formula.substr(i, count).c_str()));
                i = j - 1;
            }
            else if (formula[i] >= 'A' && formula[i] <= 'Z')
            {
                int j = i + 1;
                int count = 1;
                while (j < formula.size() && formula[j] >= 'a' && formula[j] <= 'z')
                {
                    j++;
                    count++;
                }
                elements.push_back(formula.substr(i, count));
                nums.push_back(-1);
                i = j - 1;
            }
            else
            {
                elements.push_back(formula.substr(i, 1));
                nums.push_back(0);
            }
        }
    }
    void handleNum(int &k, int multiplier)
    {
        if (elements[k][0] == ')')
        {
            k = k - 1;
            while (elements[k][0] != '(')
            {
                handleNum(k, multiplier);
                k = k - 1;
            }
        }
        else if (nums[k] >= 1)
        {
            int j = k;
            nums[j] = nums[j] * multiplier;
            k = k - 1;
            handleNum(k, nums[j]);
        }
        else
        {
            nums[k] = nums[k] * multiplier;
        }
    }

    string countOfAtoms(string formula)
    {
        partition(formula);
        int j = nums.size() - 1;
        int multiplier = 1;
        while (j >= 0)
        {
            if (nums[j] >= 1)
            {
                int k = j - 1;
                handleNum(k, nums[j]);
                j = k;
            }

            j--;
        }
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] < 0)
            {
                ans[elements[i]] += abs(nums[i]);
            }
        }
        string sol = "";
        for (auto x : ans)
        {
            sol += x.first;
            if (x.second != 1)
                sol += to_string(x.second);
        }
        return sol;
    }
};
int main()
{
    Solution s;
    auto ans = s.countOfAtoms("K4(ON(SO3)2)2");
    cout << ans;
    return 0;
}
