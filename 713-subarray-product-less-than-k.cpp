class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int n = nums.size();
        int i = 0, cnt = 0;
        while(i < n)
        {
            int prod = 1;
            for(int j = i; j<n; j++)
            {
                prod *= nums[j];
                if(prod < k) cnt++;
                else break;
            }

            i++;
        }

        return cnt;
    }
};
