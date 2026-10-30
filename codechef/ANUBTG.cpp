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
	     long long sum=0;
	     sort(arr.rbegin(),arr.rend());
	       for(int i=0;i<n;i+=4)
	       {
	            if(i+1<n)
	            sum+=arr[i]+arr[i+1];
	            else
	            {
	                sum+=arr[i];
	            }
	       }
	       cout<<sum<<endl;
	    }
	return 0;
}
