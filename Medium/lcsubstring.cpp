// Given two integer arrays nums1 and nums2, return the maximum length of a subarray that appears in both arrays.

//                                                  Example 1 :

//     Input : nums1 = [ 1, 2, 3, 2, 1 ],
//             nums2 = [ 3, 2, 1, 4, 7 ]
//  Output : 3 Explanation : The repeated subarray with maximum length is[3, 2, 1].Example 2 :

//     Input : nums1 = [ 0, 0, 0, 0, 0 ],
//             nums2 = [ 0, 0, 0, 0, 0 ]
// Output : 5

//                     Constraints :

//                     1 <= nums1.length,
//             nums2.length <= 1000 0 <= nums1[i], nums2[i] <= 100

class Solution
{
public:
    int findLength(vector<int> &nums1, vector<int> &nums2)
    {
        int dp[nums1.size() + 1][nums2.size() + 1];
        int maxlength = 0;
        // int startingindex;
        for (int i = 0; i <= nums1.size(); i++)
        {
            for (int j = 0; j <= nums2.size(); j++)
            {
                if (i == 0 || j == 0)
                {
                    dp[i][j] = 0;
                }
                else if (nums1[i - 1] == nums2[j - 1])
                {
                    dp[i][j] = 1 + dp[i - 1][j - 1];
                    if (dp[i][j] > maxlength)
                    {
                        maxlength = dp[i][j];
                        // startingindex = i - maxlength;
                    }
                }
                else
                {
                    dp[i][j] = 0;
                }
            }
        }
        // longestcommonsubarray nums1[startingindex:startingindex+maxlength];
        return maxlength;
    }
};