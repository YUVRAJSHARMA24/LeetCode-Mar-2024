class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        int n = happiness.size();
        sort(happiness.begin(), happiness.end());

        long long cnt = 0, ans = 0;
        for(int i = n-1; i>=0; i--)
        {
            if(k > 0 && happiness[i]-cnt > 0)
            {
                ans += happiness[i]-cnt;
                cnt++;
                k--;
            }
            else break;
        }

        return ans;
    }
};
