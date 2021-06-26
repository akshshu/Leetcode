
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int numRabbits(vector<int> &answers)
    {
        int ans = answers.size();
        unordered_map<int, int> mapping;
        for (int i = 0; i < answers.size(); i++)
        {
            if (mapping[answers[i]] == 0)
                mapping[answers[i]] = answers[i];
            else
                mapping[answers[i]]--;
        }
        for (auto x : mapping)
            ans += x.second;
        return ans;
    }
};
int main()
{
    Solution s;
    vector<int> answers = {10, 10, 10};
    auto ans = s.numRabbits(answers);
    cout << ans;
    return 0;
}
