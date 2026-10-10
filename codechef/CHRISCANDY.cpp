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
	    int cnt=arr[0];
	    int out=0;
	    for(int i=1;i<n;i++)
	    {
	       if(arr[i]<cnt)
	       {
	           out++;
	       }
	       else
	       {
	           cnt=arr[i];
	       }
	    }
	    cout<<out<<endl;
	}
	return 0;
}
