class Solution {
public:
    string customSortString(string order, string s) {
        int cnt[26] = {0};
        string ans = "";
        for(char &ch : s) cnt[ch - 'a']++;

        for(auto &ch : order)
        {
            while(cnt[ch - 'a'] > 0){
                ans.push_back(ch);
                cnt[ch-'a']--;
            }
        }

        for(char &ch : s)
        {
            if(cnt[ch-'a'] > 0)
                ans.push_back(ch);
        }

        return ans;
    }
};
