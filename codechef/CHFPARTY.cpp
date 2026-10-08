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
        sort(arr.begin(),arr.end());
	    int cnt=0;
	    for(int i=0;i<n;i++)
	    {
	        if(arr[i]<=cnt)
	        {
	            cnt++;
	        }
	    }
	    cout<<cnt<<endl;
	    
	}
	return 0;

}
