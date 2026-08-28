#include <bits/stdc++.h>
using namespace std;

int main() 
{
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    string s;
	    cin>>s;
	    int cnt=0,cnt1=0;
	    for(char c:s)
	    {
	        if(c=='1')
	        {
	            cnt++;
	        }
	        else
	        {
	            cnt1++;
	        }
	    }
	    if((cnt>=11 && cnt1<10) || (cnt>=10 && cnt1>=10 &&(cnt-cnt1)>=2))
	    {
	        cout<<"WIN"<<endl;
	    }
	    else
	    {
	        cout<<"LOSE"<<endl;
	    }
	    
	}
	return 0;
}
