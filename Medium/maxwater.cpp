// Given n non-negative integers a1, a2, ..., an , where each represents a point at coordinate (i, ai). n vertical lines are drawn such that the two endpoints of the line i is at (i, ai) and (i, 0). Find two lines, which, together with the x-axis forms a container, such that the container contains the most water.

// Notice that you may not slant the container.
// Input: height = [1,8,6,2,5,4,8,3,7]
// Output: 49
// Explanation: The above vertical lines are represented by array [1,8,6,2,5,4,8,3,7]. In this case, the max area of water (blue section) the container can contain is 49.
#include "headers.h"
class Solution
{
public:
    int maxArea(vector<int> &height)
    {

        int head = 0;
        int tail = height.size() - 1;
        int area = INT_MIN;
        while (head != tail)
        {
            if (height[head] < height[tail])
            {
                int p = (tail - head) * height[head];
                area = (area < p) ? p : area;
                head++;
            }
            else
            {
                int p = (tail - head) * height[tail];
                area = (area < p) ? p : area;
                tail--;
            }
        }
        return area;
    }
};
int main()
{
    vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    Solution s;
    cout << s.maxArea(height);

    return 0;
}