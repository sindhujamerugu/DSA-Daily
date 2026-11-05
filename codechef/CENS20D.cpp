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
	    if(n==1)
	    {
	        cout<<0<<endl;
	        continue;
	    }
	    int cnt=0;
	    for(int i=0;i<n;i++)
	    {
	        for(int j=i+1;j<n;j++)
	        {
	           if((arr[i]&arr[j])==arr[i])
	            {
	                cnt++;
	            }
	        }
	    }
	    cout<<cnt<<endl;
	}
	return 0;

}
