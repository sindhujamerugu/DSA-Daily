#include <bits/stdc++.h>
using namespace std;

int main() 
{
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,s;
	    cin>>n>>s;
	    vector<int>a(n);
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    vector<int>p(n);
	    for(int i=0;i<n;i++)
	    {
	        cin>>p[i];
	    }
	    int d=INT_MAX;
	    int f=INT_MAX;
	    for(int i=0;i<n;i++)
	    {
	        if(p[i]==0)
	        {
	            d=min(d,a[i]);
	        }
	        else
	        {
	            f=min(f,a[i]);
	        }
	    }
	    if( d!=INT_MAX && f!=INT_MAX && s+d+f<=100)
	    {
	        cout<<"yes"<<endl;
	    }
	    else
	    {
	        cout<<"no"<<endl;
	    }
	}
	return 0;

}
