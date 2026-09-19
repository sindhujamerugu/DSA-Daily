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
	    vector<int>arr(n);
	    int c=0;
	    for(int i=0;i<n;i++)
	    {
	        int h;
	        cin>>h;
	        if(h>k)
	        {
	            c++;
	        }
	    }
	    cout<<c<<endl;
	}
	return 0;

}
