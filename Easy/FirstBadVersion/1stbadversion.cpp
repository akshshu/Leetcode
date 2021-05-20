
class Solution
{
public:
    int firstBadVersion(int n)
    {
        int i = 1, end = n, mid;
        while (i <= end)
        {
            mid = i + (end - i) / 2;
            if (isBadVersion(mid))
            {
                if (mid == 0)
                {
                    return 0;
                }
                if (isBadVersion(mid - 1))
                    end = mid - 1;
                else
                    return mid;
            }
            else
                i = mid + 1;
        }
        return mid;
    }
};
