#include <bits/stdc++.h>
using namespace std;

int main() 
{
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,p;
	    cin>>n>>p;
	    string s;
	    cin>>s;
	    int le=0,ri=0;
	    for(int i=0;i<p;i++)
	    {
	        if(s[i]=='R')
	        {
	            le++;
	        }
	    }
	    for(int i=p-1;i<n;i++)
	    {
	        if(s[i]=='L')
	        {
	            ri++;
	        }
	    }
	    cout<<min(le,ri)<<endl;
	    
	}
	return 0;

}
