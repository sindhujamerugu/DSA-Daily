#include <bits/stdc++.h>
using namespace std;
const int mod=1e9+7;
int main() 
{
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    long long a,b,n;
	    cin>>a>>b>>n;
	    if(n%2!=0)
	    {
	        a*=2;
	    }
	    if(a>b)
	    {
	        cout<<a/b<<endl;
	    }
	    else
	    {
	        cout<<b/a<<endl;
	    }
	}
	return 0;

}
