
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> plusOne(vector<int> &digits)
    {
        int carry = 0;
        int temp = digits[digits.size() - 1] + 1;
        digits[digits.size() - 1] = temp % 10;
        carry = temp / 10;
        for (int i = digits.size() - 2; i >= 0 && carry; i--)
        {
            int temp = digits[i] + carry;
            digits[i] = temp % 10;
            carry = temp / 10;
        }
        if (carry)
            digits.insert(digits.begin(), carry);
        return digits;
    }
};
int main()
{
    Solution s;
    vector<int> digits = {4, 3, 2, 1};
    auto ans = s.plusOne(digits);
    return 0;
}
