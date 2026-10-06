#include <bits/stdc++.h>
using namespace std;

int main() 
{
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    long long n;
	    cin>>n;
	    vector<long long>arr(n);
	    for(long long i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    long long cnt=0;
	    map<long long,long long>freq;
	    for(int x:arr)
	    {
	        freq[x]++;
	    }
	    for(int x:arr)
	    {
	        if(freq[x]>=2)
	        { 
	            cnt+=freq[x]*(freq[x]-1)/2;
	            freq[x]=0;
	        }
	    }
	   cout<<cnt<<endl;
	}
	   
	return 0;
}
