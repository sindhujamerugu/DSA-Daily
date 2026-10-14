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
	    vector<int>arr(n);
	    for(int i=0;i<n;i++)
	    {
	       cin>>arr[i]; 
	    }
	    int sum=0;
	   
	    if(k>=n-1)
	    {
	        for(int i=0;i<n;i++)
	        {
	        sum+=arr[i];
	        }
	    }
	    else
	    {
	        sort(arr.rbegin(),arr.rend());
	        for(int i=0;i<=k;i++)
	        {
	            sum+=arr[i];
	        }
	       
	    }
	    cout<<sum<<endl;
	}
	return 0;

}
