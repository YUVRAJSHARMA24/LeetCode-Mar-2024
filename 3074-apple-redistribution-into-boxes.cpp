class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        int n = apple.size();
        int m = capacity.size();
        int sum = 0;

        for(int i = 0; i<n; i++)
        {
            sum += apple[i];
        }

        sort(capacity.begin(), capacity.end());
        int cnt = 0, tot = 0;
        for(int i = m-1; i>=0; i--)
        {
            if(tot < sum){
                tot += capacity[i];
                cnt++;
            }
            else break;
        }

        return cnt;
    }
};
