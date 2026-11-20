class Solution {
public:
    int maximumLength(vector<int>& nums) 
    {
        unordered_map<long long, int> freq;
        for (int x:nums)
            freq[x]++;
        int ans=1;
        for (auto &[x, mp]:freq) 
        {
            if (x==1) 
            {
                if (mp%2==0)
                    ans=max(ans,mp-1);
                else
                    ans=max(ans, mp);
                continue;
            }
            long long cur=x;
            int len=0;
            while (freq.count(cur) && freq[cur]>=2) {
                len += 2;
                if (cur * cur > 1000000000LL) 
                {
                    cur = 1000000001LL;
                    break;
                }
                cur = cur * cur;
            }
            if (freq.count(cur))
                len++;
            else
                len--;
            ans = max(ans, len);
        }
        return ans;
    }
};