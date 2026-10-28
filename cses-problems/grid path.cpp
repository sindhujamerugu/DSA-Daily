#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<vector<int>> dp(n,vector<int>(n));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            dp[i][j]=0;
        }
    }
    if(dp[i][j]==0)
    {
        dp[i][j]=0;
    }
    else
    {
        dp[i]=dp[i-1][j]+dp[i][j-1];
    }
    cout<<dp[n]<<endl;
}