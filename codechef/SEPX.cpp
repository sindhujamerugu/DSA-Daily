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
	    vector<int>arr(n);
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    int cnt=0,cnt1=0,cnt2=0;
	    for(int i=0;i<n;i++)
	    {
	        if(arr[i]<x)
	        {
	            cnt++;
	        }
	        else if(arr[i]>x)
	        {
	            cnt1++;
	        }
	        else
	        {
	            cnt2++;
	        }
	    }
	    if(cnt==0 || cnt1==0 || cnt2>0)
	    {
	        cout<<"Yes"<<endl;
	    }
	    else
	    {
	        cout<<"No"<<endl;
	    }
	    
	}
	return 0;

}
