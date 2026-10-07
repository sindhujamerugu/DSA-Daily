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
	   int u=0,d=0,l=0,r=0;
	   for(int i=0;i<n;i++)
	   {
	       if(s[i]=='L')
	       {
	           l++;
	       }
	       else if(s[i]=='R')
	       {
	           r++;
	       }
	       else if(s[i]=='U')
	       {
	           u++;
	       }
	       else
	       {
	           d++;
	       }
	   }
	   if(abs(u-d)==0 && abs(l-r)==2 || abs(u-d)==2 && abs(l-r)==0)
	   {
	       cout<<"YES"<<endl;
	   }
	   else
	   {
	       cout<<"NO"<<endl;
	   }
	}
	return 0;

}
