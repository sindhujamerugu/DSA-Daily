class Solution {
public:
    string sortVowels(string s) 
    {
        int n=s.size();
        string v="";
        for(char c:s)
        {
            if(isVowel(c))
            {
               v+=c;
            }
        }
        sort(v.begin(),v.end());
        int j=0;
        for(int i=0;i<n;i++)
        {
            if(isVowel(s[i]))
            {
              s[i]=v[j++];
            }
        }
        return s;
    }
    bool isVowel(char c)
    {
        return c=='A' || c=='E' || c=='I' || c=='O' || c=='U' || c=='a' || c=='i' || c=='e' || c=='o' || c=='u';
    }
};