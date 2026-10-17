#include <bits/stdc++.h>
using namespace std;
int main() 
{
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int ar[101][101];
	    for(int i=0;i<n;i++)
	    {
	        for(int j=0;j<=i;j++)
	        {
	            cin>>ar[i][j];
	        }
	    }
	    for(int i=1;i<n;i++)
	    {
	        for(int j=0;j<=i;j++)
	        {
	            if(j==0)
	            {
	                ar[i][j]+=ar[i-1][j];
	            }
	            else if(j==i)
	            {
	                ar[i][j]+=ar[i-1][j-1];
	            }
	            else
	            {
	                ar[i][j]+=max(ar[i-1][j-1],ar[i-1][j]);
	            }
	        }
	    }
	    int ans=0;
	    for(int j=0;j<n;j++)
	    {
	      ans=max(ans,ar[n-1][j]);
	    }
	    cout<<ans<<endl;
	}
	return 0;
}
