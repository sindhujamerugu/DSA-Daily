#include <bits/stdc++.h>
using namespace std;
int main() 
{
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,b;
	    cin>>n>>b;
	    int out=0;
	    for(int i=1;i<=n;i++)
	    {
	      int w,h,p;
	      cin>>w>>h>>p;
	      if(p<=b)
	      {
	        out=max(out,(w*h));
	      }
	    }
	    if(out==0)
	    {
	       cout<<"no tablet"<<endl; 
	    }
	    else
	    {
	        cout<<out<<endl;
	    }
	}
	return 0;

}
