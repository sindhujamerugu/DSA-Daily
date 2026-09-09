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
	    unordered_map<int,int>freq,freq1;
	    string a,b;
	    cin>>a>>b;
	    int f=0;
	    for(char c:a)
	    {
	        freq[c]++;
	    }
	    for(char c:b)
	    {
	        freq1[c]++;
	    }
	    if((freq['a']==freq1['b']) && (freq['b']==freq1['a']))
	    {
	        f=1;
	    }
	    if(f)
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
