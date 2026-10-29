#include <bits/stdc++.h>
using namespace std;
int main() 
{
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,k;
	    cin>>n>>k;
	    long long ans=-1;
	    long long maxi=INT_MIN;
	    for(int i=0;i<n;i++)
	    {
	        long long x;
	        cin>>x;
	        if(k%x==0)
	        {
	            ans=max(x,ans);
	        }
	    }
	    cout<<ans<<endl;
	}
	return 0;
}
