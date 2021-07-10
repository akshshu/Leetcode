class Solution
{
public:
    unordered_map<int, vector<int>> indexkeeper;
    Solution(vector<int> &nums)
    {
        for (int i = 0; i < nums.size(); i++)
            indexkeeper[nums[i]].push_back(i);
    }

    int pick(int target)
    {
        int randomindex = rand() % indexkeeper[target].size();
        return indexkeeper[target][randomindex];
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * int param_1 = obj->pick(target);
 */