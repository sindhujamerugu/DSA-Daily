#include <bits/stdc++.h>
using namespace std;
int main() 
{
	// your code goes here
	int n,k;
	cin>>n>>k;
	vector<long long>arr(n);
	for(int i=0;i<n;i++)
	{
	    cin>>arr[i];
	}
	long long tar=arr[k];
	long long time=0;
	for(int i=0;i<n;i++)
	{
	    if(i<=k)
	    {
	        time+=min(arr[i],tar);
	    }
	    else
	    {
	        time+=min(arr[i],tar-1);
	    }
	}
	cout<<time<<endl;
    return 0;
}
