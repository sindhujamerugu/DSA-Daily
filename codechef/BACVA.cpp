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
	    long long sum=0;
	    for(char c:a)
	    {
	        sum+=c-'0';
	    }
	    if(sum%10==0)
	    {
	        cout<<"Valid"<<endl;
	    }
	    else
	    {
	        cout<<"Invalid"<<endl;
	    }
	}
	return 0;
}
