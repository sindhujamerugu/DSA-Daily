#include <bits/stdc++.h>
using namespace std;

int main() 
{
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    string a;
	    cin>>a;
	    if(a[0]=='1')
	    {
	        cout<<"10";
	        for(int i=1;i<a.size();i++)
	        {
	            cout<<a[i];
	        }
	        cout<<endl;
	    }
	    else
	    {
	        cout<<"1"<<a<<endl;
	    }
	    cout<<endl;
	    
	}
	return 0;

}
