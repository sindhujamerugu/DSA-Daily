class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d)
    {
        int n=arr1.size();
        int n1=arr2.size();
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            int f=0;
            for(int j=0;j<n1;j++)
            {
                if(abs(arr1[i]-arr2[j])<=d)
                {
                    f=1;
                    break;
                }
            }
            if(f==0)
            {
             cnt++;
            }
        }
        return cnt;
        
    }
};