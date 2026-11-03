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
	    int cnt2=0;
	    for(int i=0;i<n;i++)
	    {
	        int cnt1=0,cnt=0;
	        for(int j=0;j<n;j++)
	        {
	          if(arr[j]<=arr[i])
	          {
	             cnt++;
	          }
	          else
	          {
	              cnt1++;
	          }
	        }
	         if(cnt>cnt1)
	         {
	             cnt2++;
	         }
	    }
	    cout<<cnt2<<endl;

	}
	return 0;

     
}
