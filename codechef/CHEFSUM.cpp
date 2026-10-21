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
	    int out=0;
	    for(int i=0;i<n;i++)
	    {
	        if(arr[i]<mini)
	        {
	            mini=arr[i];
	            out=i+1;
	        }
	    }
	    cout<<out<<endl;
	}
	return 0;

}
