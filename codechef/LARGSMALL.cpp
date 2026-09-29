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
	    int mx=*max_element(arr.begin(),arr.end());
	    int mn=*min_element(arr.begin(),arr.end());
	    if(mn==mx)
	    {
	        cout<<0<<endl;
	    }
	    else
	    {
	        cout<<mx-mn-1<<endl;
	    }
	}
	return 0;
}
