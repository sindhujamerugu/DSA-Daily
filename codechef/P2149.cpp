#include <bits/stdc++.h>
using namespace std;

int main()
{
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b,x;
	    cin>>a>>b>>x;
	    int area=x*x;
	    if(area>=a*b)
	    {
	        cout<<0<<endl;
	    }
	    else if(area>=min(a,b))
	    {
	        cout<<1<<endl;
	    }
	    else
	    {
	        cout<<2<<endl;
	    }
	}
	return 0;

}
