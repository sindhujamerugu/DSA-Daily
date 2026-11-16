class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        int n=arr.size();
        int m=1e9+7;
        long long out=0;
        long long s=0;
        int e=1;
        int o=0;
        for(int i=0;i<n;i++)
        {
            s+=arr[i];
            if(s%2==1)
            {
                out+=e;
                o++;
            }
            else
            {
                out+=o;
                e++;
            }
        }
        return out%m;  
    }
};