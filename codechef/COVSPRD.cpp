#include <bits/stdc++.h>
using namespace std;

int main() 
{
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,d;
	    cin>>n>>d;
	  
	    int out=1;
	    for(int i=1;i<=d;i++)
	    {
	        if(i<=10)
	        {
	            out*=2;
	        }
	        else
	        {
	            out*=3;
	        }
	        if(out>=n)
	        {
	            out=n;
	            break;
	        }
	    }
	    cout<<out<<endl;
	}
	return 0;

}
