#include <bits/stdc++.h>
using namespace std;

int main()
{
	// your code goes hereint 
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
	    int c=0;
	    for(int x:arr)
	    {
	        if(x>=1000)
	        {
	            c++;
	        }
	    }
	    cout<<c<<endl;
	}
	return 0;
}
