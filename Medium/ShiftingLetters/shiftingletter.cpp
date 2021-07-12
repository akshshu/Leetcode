
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    string shiftingLetters(string s, vector<int> &shifts)
    {
        int temp = 0;
        for (int i = shifts.size() - 1; i >= 0; i--)
        {
            shifts[i] = (shifts[i] + temp) % 26;
            temp = shifts[i];
        }
        for (int i = 0; i < shifts.size(); i++)
        {
            if ((int)(s[i] + shifts[i]) > 122)
                s[i] = (s[i] + shifts[i]) % 123 + 97;
            else
            {
                s[i] = s[i] + shifts[i];
            }
        }
        return s;
    }
};
int main()
{
    Solution s;
    string s1 = "abc";
    vector<int> shifts = {3, 5, 9};
    auto ans = s.shiftingLetters(s1, shifts);
    cout << ans;
    return 0;
}
