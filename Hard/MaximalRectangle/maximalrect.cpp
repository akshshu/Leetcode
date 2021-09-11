
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int maxArea = 0;
    void maxAreaHisto(vector<int> &histo)
    {
        int n = histo.size();
        vector<int> leftMin(n);
        vector<int> rightMin(n);
        vector<int> st;
        for (int i = 0; i < n; i++)
        {
            while (!st.empty() and histo[st.back()] >= histo[i])
                st.pop_back();
            if (st.empty())
                leftMin[i] = 0;
            else
                leftMin[i] = st.back() + 1;
            st.push_back(i);
        }
        st.clear();
        for (int i = n - 1; i >= 0; i--)
        {
            while (!st.empty() and histo[st.back()] >= histo[i])
                st.pop_back();
            if (st.empty())
                rightMin[i] = n - 1;
            else
                rightMin[i] = st.back() - 1;
            st.push_back(i);
        }
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            int temp = (rightMin[i] - leftMin[i] + 1) * histo[i];
            ans = max(ans, temp);
        }
        maxArea = max(maxArea, ans);
    }
    int maximalRectangle(vector<vector<char>> &matrix)
    {
        if (matrix.size() == 0)
            return 0;
        vector<int> histogram(matrix[0].size());
        for (int i = 0; i < matrix[0].size(); i++)
            histogram[i] = matrix[0][i] - '0';
        maxAreaHisto(histogram);
        for (int i = 1; i < matrix.size(); i++)
        {
            for (int j = 0; j < matrix[i].size(); j++)
            {
                if (matrix[i][j] == '0')
                    histogram[j] = 0;
                else
                    histogram[j]++;
            }
            maxAreaHisto(histogram);
        }
        return maxArea;
    }
};
int main()
{
    Solution s;
    vector<vector<char>> matrix = {{'1', '0', '1', '0', '0'}, {'1', '0', '1', '1', '1'}, {'1', '1', '1', '1', '1'}, {'1', '0', '0', '1', '0'}};
    auto ans = s.maximalRectangle(matrix);
    return 0;
}
