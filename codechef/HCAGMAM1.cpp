#include <bits/stdc++.h>
using namespace std;

int main() 
{
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int x,y;
	    cin>>x>>y;
	    string s;
	    cin>>s;
	    int cnt=0;
	    for(char c:s)
	    {
	        if(c=='1')
	        {
	            cnt++;
	        }
	    }
	    int c1=0,maxi=0;
	    for(char c:s)
	    {
	        if(c=='1')
	        {
	            c1++;
	            maxi=max(maxi,c1);
	        }
	        else
	        {
	            c1=0;
	        }
	    }
	    cout<<(maxi*y)+(cnt*x)<<endl;
	}
	return 0;
}
