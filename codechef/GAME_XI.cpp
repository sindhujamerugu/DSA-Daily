#include <bits/stdc++.h>
using namespace std;
int main() 
{
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,m;
	    cin>>n>>m;
	    vector<long long>arr(n);
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    vector<long long >brr(m);
	    for(int i=0;i<m;i++)
	    {
	        cin>>brr[i];
	    }
	    long long sum =0;
	    if(n<4 || m<4 || n+m<11)
	    {
	        cout<<-1<<endl;
	        continue;
	    }
	    else
	    {
	         sort(arr.rbegin(),arr.rend());
	         sort(brr.rbegin(),brr.rend());
	        long long i=0,j=0,cnt=0;
	        while(cnt<11 && (i<n || j<m))
	        {
	            if(i<n &&(j>=m || arr[i]>=brr[j]))
	            {
	                sum+=arr[i];
	                i++;
	            }
	            else if(j<m)
	            {
	                sum+=brr[j];
	                j++;
	            }
	            cnt++;
	        }
	    }
	    cout<<sum<<endl;
	}
	return 0;
}
