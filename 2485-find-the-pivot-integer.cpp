class Solution {
public:
    int pivotInteger(int n) {
        int total = 0;
        for(int i = 1; i<=n; i++)
            total += i;
        

        int preSum = 0;
        for(int i = 1; i<=n; i++)
        {
            preSum += i;
            if((total - preSum + i) == preSum) return i;
        }

        return -1;
    }
};
