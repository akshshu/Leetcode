
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    string reverseWords(string &str)
    {
        int wrdStart = 0;
        int wrdEnd = 0;
        for (int i = 0; i <= str.size(); i++)
        {
            if (i == str.size() || str[i] == ' ')
            {
                wrdEnd = i - 1;
                while (wrdStart < wrdEnd)
                {
                    swap(str[wrdStart], str[wrdEnd]);
                    wrdStart++;
                    wrdEnd--;
                }
                wrdStart = i + 1;
            }
        }
        reverse(str.begin(), str.end());
        return str;
    }
};
int main()
{
    Solution s;
    string str = "a b c";
    auto ans = s.reverseWords(str);
    cout << ans;
    return 0;
}
