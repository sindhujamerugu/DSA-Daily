class Solution {
public:
    bool isPalindromic(string s) 
    {
       string s1="";
        for(char c:s)
            {
                bitset<8>bits(c);
                s1+=bits.to_string();
            }
        int i=0,j=s1.size()-1;
        while(i<j)
            {
                if(s1[i]!=s1[j])
                {
                    return false;
                }
                i++;
                j--;
            }
        return true;
    }
};