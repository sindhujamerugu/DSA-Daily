#include <bits/stdc++.h>
using namespace std;
int main() 
{
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	int n,x,k;
	cin>>n>>x>>k;
	vector<int>a(n);
	for(int i=0;i<n;i++)
	{
	    cin>>a[i];
	}
	vector<int>b(n);
	for(int i=0;i<n;i++)
	{
	    cin>>b[i];
	}
	int cnt=0;
	for(int i=0;i<n;i++)
	{
	    if(abs(a[i]-b[i])<=k)
	    {
	      cnt++;
	    }
	}
    if(cnt>=x)
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }
	}
	return 0;
}
