#include <bits/stdc++.h>
using namespace std;

int main() 
{
	// your code goes here
	int n,s;
	cin>>n>>s;
	vector<int>ar(n);
	for(int i=0;i<n;i++)
	{
	    cin>>ar[i];
	}
	vector<int>c(s+1,1e9);
	c[0]=0;
	for(int i=1;i<=s;i++)
	{
	    for(int j=0;j<n;j++)
	    {
	        if(ar[j]<=i)
	        {
	            c[i]=min(c[i],c[i-ar[j]]+1);
	        }
	    }
	}
	if(c[s]<1e9)
	{
	    cout<<c[s]<<endl;
	}
	else
	{
	    cout<<-1<<endl;
	}
	return 0;

}
