#include <bits/stdc++.h>
using namespace std;

int main() 
{
	// your code goes here
	string s;
	cin>>s;
	string p;
	cin>>p;
	int n=s.length();
	int m=p.length();
	if(m>n)
	{
	    cout<<-1<<endl;
	    return 0;
	}
	vector<int>pre(26,0),w(26,0);
	for(int i=0;i<m;i++)
	{
	    pre[p[i]-'a']++;
	    w[s[i]-'a']++;
	}
	vector<int>ans;
	if(pre==w)
	{
	    ans.push_back(0);
	}
	for(int i=m;i<n;i++)
	{
	    w[s[i]-'a']++;
	    w[s[i-m]-'a']--;
	    if(pre==w)
	    {
	        ans.push_back(i-m+1);
	    }
	}
	if(ans.empty())
	{
	    cout<<-1<<endl;
	}
	for(int i=0;i<ans.size();i++)
	{
	    if(i>0)
	    {
	        cout<<" ";
	    }
	        cout<<ans[i];
	}
	return 0;
}
