#include <bits/stdc++.h>
using namespace std;
int main() 
{
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	   long long n,k;
	    cin>>n>>k;
	    vector<long long>a(n);
	    long long mn=0;
	    for(long long i=0;i<n;i++)
	    {
	       long long x;
	       cin>>x;
	       long long rem=x%k;
	       if(rem!=0)
	       {
	           long long ac=k-rem;
	           long long rm=rem;
	           if(rem==x)
	           {
	             mn+=ac;
	           }
	           else
	           {
	             mn+=min(ac,rm);
	           }
	       }
	    }
	   cout<<mn<<endl;
	}
	return 0;

}
