class Solution {
public:
    int climbStairs(int n) {
        if (n <= 0)
        {
            return 0;
        }
        if (n == 1)
        {
            return 1;
        }
        if (n == 2)
        {
            return 2;
        }
        int *result = new int[n+1];
        result[1] = 1;
        result[2] = 2;
        for (int i = 3; i < n+1; i++)
        {
            result[i] = result[i-1] + result[i-2];
        }
        int tmp = result[n];
        delete[] result;
        return tmp;
    }
};