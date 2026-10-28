#include <bits/stdc++.h>
using namespace std;
int main() 
{
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,k;
	    cin>>n>>k;
	    string s;
	    cin>>s;
	    int cnt=0;
	    int out=0;
	    while(cnt<n)
	    {
	       if(s[cnt]=='1')
	       {
	           out++;
	           cnt+=k+1;
	       }
	       else
	       {
	           cnt++;
	       }
	    }
	    cout<<out<<endl;
	}
}
