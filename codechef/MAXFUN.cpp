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
	    vector<long long>arr(n);
	    for(long long i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    long long mx=*max_element(arr.begin(),arr.end());
	    long long mn=*min_element(arr.begin(),arr.end());
	    cout<<2LL*(mx-mn)<<endl;
	}
	return 0;
}
