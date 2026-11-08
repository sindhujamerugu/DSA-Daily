class Solution {
public:
    vector<vector<string>> findMismatchedSegments(string s1, string s2) 
    {
        vector<vector<string>>arr;
        int n=s1.size();
        int m=s2.size();
        string w="",w1="";
        for(int i=0;i<n;i++)
        {
            if(s1[i]!=s2[i])
            {
                w+=s1[i];
                w1+=s2[i];
            }
            else
            {
                if(w!="" || w1!="")
                {
                    arr.push_back({w,w1});
                    w="";
                    w1="";
                }
            }
        }
        return arr;
    }
};