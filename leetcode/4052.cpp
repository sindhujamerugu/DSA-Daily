class Solution {
public:
    vector<vector<int>> cyclicShift(int n, vector<vector<int>>& grid, vector<int>& rowShift, vector<int>& colShift) 
    {
        vector<vector<int>>t(n,vector<int>(n));
        for(int i=0;i<n;i++)
        {
            int l=rowShift[i];
            for(int j=0;j<n;j++)
            {
                t[i][(j-l+n)%n]=grid[i][j];
            }
        }
        vector<vector<int>>out(n,vector<int>(n));
        for(int j=0;j<n;j++)
        {
            int l=colShift[j];
            for(int i=0;i<n;i++)
            {
                out[(i-l+n)%n][j]=t[i][j];
            }
        }
        return out;
    }
};