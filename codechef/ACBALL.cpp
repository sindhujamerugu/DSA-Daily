#include <bits/stdc++.h>
using namespace std;

int main() 
{
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    string x,y;
	    cin>>x>>y;
	    for(int i=0;i<x.size();i++)
	    {
	        if(x[i]=='W'|| y[i]=='W')
	        {
	            cout<<"B";
	        }
	        else
	        {
	            cout<<"W";
	        }
	    }
	    cout<<endl;
	}
    return 0;
}
