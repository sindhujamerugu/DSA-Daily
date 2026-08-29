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
	    vector<int>arr(n);
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    int mini=INT_MAX;
	    sort(arr.begin(),arr.end());
	    for(int i=1;i<n;i++)
	    {
	            mini=min(mini,arr[i]-arr[i-1]);
	    }
	    cout<<mini<<endl;
	}
	return 0;
}
