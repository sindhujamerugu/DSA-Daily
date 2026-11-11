#include <bits/stdc++.h>
using namespace std;

int main() 
{
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    string s;
	    cin>>s;
	    int cnt=0;
	    for(int i=0;i<n;i++)
	    {
	        int s1=(s[i]-'0')*10+(s[(i+1)%n]-'0');
	    
	    if(s1%4==0)
	    {
	        cnt++;
	    }
	    }
	    cout<<cnt<<endl;
	}
}
