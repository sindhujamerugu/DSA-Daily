#include <bits/stdc++.h>
using namespace std;

int main() 
{
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    long long n,k;
	    cin>>n>>k;
	    vector<long long>a(n);
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    unordered_set<int>s;
	    int f=0;
	    for(int i=0;i<n;i++)
	    {
	        long long x=a[i];
	        long long nd=k-x;
	        if(s.find(nd)!=s.end())
	        {
	            f=1;
	            break;
	        }
	        s.insert(x);
	    }
	    if(f)
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
