class Solution
{
public:
    bool isHappy(int n)
    {
        unordered_map<int, int> pr;
        pr[n] = 1;
        while (true)
        {
            int sum = 0;
            while (n)
            {
                int p = n % 10;
                sum += pow(p, 2);
                n = n / 10;
            }
            if (sum == 1)
                return true;
            if (pr[sum] == 1)
                return false;
            pr[sum] = 1;
            n = sum;
        }
    }
};