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
	    int x=s.length(),y=0;
	    for(int i=0;i<s.length()-3;i++)
	    {
	        if(s[i]=='c' && s[i+1]=='o' && s[i+2]=='d' && s[i+3]=='e')
	        {
	            x=i;
	        }
	        if(s[i]=='c' && s[i+1]=='h' && s[i+2]=='e' && s[i+3]=='f')
	        {
	            y=i;
	            break;
	        }
	    }
	    if(x<y)
	    {
	        cout<<"AC"<<endl;
	    }
	    else
	    {
	        cout<<"WA"<<endl;
	    }
	}
	return 0;
}
