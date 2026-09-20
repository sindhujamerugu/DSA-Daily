class Solution {
public:
    int countIntersectingIntervals(vector<vector<int>>& intervals) 
    {
        int n=intervals.size();
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                int s=max(intervals[i][0],intervals[j][0]);
                int e=min(intervals[i][1],intervals[j][1]);
                if(s<=e)
                {
                    cnt++;
                }
            }
        }
        return cnt;
    }
};