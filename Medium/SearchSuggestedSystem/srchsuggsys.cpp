
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<vector<string>> suggestedProducts(vector<string> &products, string searchWord)
    {
        vector<vector<string>> ans(searchWord.size());
        sort(products.begin(), products.end());

        int i = 0;
        bool match = true;
        while (i < searchWord.size() && match)
        {
            int end = products.size() - 1;
            int start = 0;
            int foundIndex = -1;
            string s2 = searchWord.substr(0, i + 1);

            while (start <= end)
            {
                int mid = start + (end - start) / 2;
                string s1 = products[mid].substr(0, i + 1);
                if (s1 == s2)
                {
                    foundIndex = mid;
                    end = mid - 1;
                }
                else if (s1 > s2)
                {
                    end = mid - 1;
                }
                else
                {
                    start = mid + 1;
                }
            }
            if (foundIndex == -1)
                break;
            else
            {
                int count = 0;
                while (count < 3 && foundIndex + count < products.size())
                {
                    if (products[foundIndex + count].substr(0, i + 1) == s2)
                    {
                        ans[i].push_back(products[foundIndex + count]);
                        count++;
                    }
                    else
                        break;
                }
            }
            i++;
        }
        return ans;
    }
};
int main()
{
    Solution s;
    vector<string> products = {"mobile", "mouse", "moneypot", "monitor", "mousepad"};
    string search = "mouse";
    auto ans = s.suggestedProducts(products, search);
    for (auto x : ans)
    {
        for (auto st : x)
        {
            cout << st << " ";
        }
        cout << endl;
    }
    return 0;
}
