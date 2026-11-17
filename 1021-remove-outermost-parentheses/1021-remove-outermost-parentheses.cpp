
class Solution {
public:
    string removeOuterParentheses(string s) {
        string s1="";
        int out=0;
        for (char ch:s) 
        {
            if (ch=='(') 
            {
                if(out>0) 
                {
                    s1+=ch;
                }
                out++;
            }
            else 
            {
                out--;
                if (out>0) 
                {
                    s1+=ch;
                }
            }
        }
        return s1;
    }
};
