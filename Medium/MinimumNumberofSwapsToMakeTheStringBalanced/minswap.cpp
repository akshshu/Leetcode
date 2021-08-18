
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int minSwaps(string s)
    {
        int opencloseDiff = 0;
        int i = 0, j = s.size() - 1;
        int count = 0;
        while (i < j)
        {
            if (s[i] == '[')
                opencloseDiff++;
            else
                opencloseDiff--;
            if (opencloseDiff < 0)
            {
                while (j > i and s[j] != '[')
                    j--;
                if (j > i)
                {
                    swap(s[i], s[j]);
                    count++;
                    j--;
                    opencloseDiff = 1;
                }
                else
                {
                    break;
                }
            }
            i++;
        }
        return count;
    }
};
int main()
{
    Solution s;
    string s1 = "[[[]]]][][]][[]]][[[";
    auto ans = s.minSwaps(s1);
    return 0;
}
