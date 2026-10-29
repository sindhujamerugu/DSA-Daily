class Solution {
public:
    vector<int> findAnagrams(string s, string p) 
    {
        int n=s.size(),n1=p.size();
        vector<int>freq(26,0);
        vector<int>w(26,0);
        for(char c:p)
        {
            freq[c-'a']++;
        }
        vector<int>out;
        for(int i=0;i<n1;i++)
        {
            w[s[i]-'a']++;
        }
        if(w==freq)
        {
            out.push_back(0);
        }
        for(int i=n1;i<n;i++)
        {
            w[s[i]-'a']++;
            w[s[i-n1]-'a']--; 
            if(freq==w)
            out.push_back(i-n1+1);  
        }
        return out;
    }
};