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
	    int f=0;
	    unordered_map<int,int>mp;
	    for(int x:arr)
	    {
	        mp[x]++;
	    }
	    for(int x:arr)
	    {
	        if(mp[x]%2!=0)
	        {
	            f=1;
	            break;
	        }
	    }
	    if(f)
	    {
	        cout<<"NO"<<endl;
	    }
	    else
	    {
	        cout<<"YES"<<endl;
	    }
	}
	return 0;

}
