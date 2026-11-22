#include <bits/stdc++.h>
using namespace std;
int main() 
{
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,k;
	    cin>>n>>k;
	     int maxi=INT_MIN;
	     vector<int>arr(n);
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	      int sum=0;
	      sort(arr.begin(),arr.end());
	       for(int i=0;i<n;i++)
	        {
	            sum+=arr[i];
	        }
	         maxi=sum;
	        for(int i=0;i<k;i++)
	        {
	            if(arr[i]==1)
	            {
	                sum+=5;
	            }
	            else if(arr[i]==2)
	            {
	                sum+=3;
	            }
	            else if(arr[i]==3)
	            {
	                sum+=1;
	            }
	            else
	            {
	                break;
	            }
	        }
	            if(sum>maxi)
	            {
	                maxi=sum;
	            }
	        cout<<maxi<<endl;
	}
     return 0;
}
