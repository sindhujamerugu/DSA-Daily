#include <bits/stdc++.h>
using namespace std;
int main() 
{
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b,c,p,q,r;
	    cin>>a>>b>>c>>p>>q>>r;
	    int t=p+q+r;
	    if(2*(p+b+c)>t || 2*(a+q+c)>t || 2*(a+b+r)>t)
	    {
	        cout<<"YES"<<endl;
	    }
	    else
	    {
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
