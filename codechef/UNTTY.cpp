#include <bits/stdc++.h>
using namespace std;
int main() 
{
	// your code goes here
	string s;
	cin>>s;
	stack<char>st;
	for(char c:s)
	{
	   if(c!='#')
	    {
	        st.push(c);
	    }
	    else
	    {
	        if(!st.empty())
	         st.pop();
	    }
	}
	string out="";
	while(!st.empty())
	{
	    out+=(st.top());
	    st.pop();
	}
    reverse(out.begin(),out.end());
    cout<<out;
	return 0;
}

