class Solution {
public:
    string shiftingLetters(string s, vector<int>& shifts) 
    {
        int n=shifts.size();
        long long shf=0;
        for(int i=s.size()-1;i>=0;i--)
        {
           shf=(shf+shifts[i])%26;
           s[i]='a'+(s[i]-'a'+shf)%26; 
        }
        return s;
    }
};