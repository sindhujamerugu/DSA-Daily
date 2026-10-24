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
	    int cnt=0;
	    set<string>st;
	    for(int i=0;i<s.size()-1;i++)
	    {
	        st.insert(s.substr(i,2));
	    }
	    cout<<st.size()<<endl;
	}
	return 0;
}
