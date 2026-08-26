#include <bits/stdc++.h>
using namespace std;

int main() 
{
	// your code goes here
	int x,y,k;
	cin>>x>>y>>k;
	int t=abs(x-y);
	if(t<=k && (k-t)%2==0)
	{
	    cout<<"YES"<<endl;
	}
	else
	{
	    cout<<"NO"<<endl;
	}
	return 0;

}
