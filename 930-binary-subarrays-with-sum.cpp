class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        unordered_map<int, int> mp;
        mp[0] = 1;
        int sum = 0, cnt = 0;

        for(int i = 0; i<nums.size(); i++)
        {
            sum += nums[i];
            if(mp[sum - goal])
                cnt += mp[sum - goal];
            
            mp[sum]++;
        }

        return cnt;
    }
};
