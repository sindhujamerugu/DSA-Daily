#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int>dp(n+1,1e9);
    dp[0]=0;
    for(int i=1;i<=n;i++)
    {
        int t=i;
        while(t>0)
        {
            int d=t%10;
            t=t/10;
            if(d!=0)
            {
                dp[i]=min(dp[i], dp[i-d]+1);
            }
        }
    }
    cout<<dp[n]<<endl;
    return 0;
}