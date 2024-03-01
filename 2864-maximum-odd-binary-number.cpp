// ----------Approach 1----------------
class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        sort(s.begin(), s.end());
        int n = s.size();
        int cnt1 = 0;
        for(int i = 0; i<n; i++)
        {
            if(s[i] == '1') cnt1++;
        }

        if(cnt1 == 0 || cnt1 == 1) return s;

        int i = 0, j = n-2;
        while(i < j)
        {
            swap(s[i++], s[j--]);
        }

        return s;

    }
};
// ----------Approach 2----------------
  class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int n = s.size();
        int cnt0 = 0, cnt1 = 0;
        for(auto ch : s)
        {
            if(ch == '0') cnt0++;
            else cnt1++;
        }

        string res = string(cnt1-1, '1') + string(cnt0, '0') + '1';
        return res;
    }
};
