#include <bits/stdc++.h>
using namespace std;

int main() 
{
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,x;
	    cin>>n>>x;
	    vector<int>ar(n);
	    for(int i=0;i<n;i++)
	    {
	        cin>>ar[i];
	    }
	    for(int i=0;i<=n-x;i++)
	    {
	        int mxm=ar[i];
	        for(int j=i;j<i+x;j++)
	        {
	            if(ar[j]>mxm)
	            {
	                mxm=ar[j];
	            }
	        }
	        cout<<mxm<<" ";
	    }
	    cout<<endl;
	   
	}
	return 0;

}
