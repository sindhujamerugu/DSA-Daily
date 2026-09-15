#include <bits/stdc++.h>
using namespace std;
int main() 
{
	// your code goes here
	int n;
	cin>>n;
	vector<int>a(n);
	for(int i=0;i<n;i++)
	{
	    cin>>a[i];
	}
	int m;
	cin>>m;
	vector<int>b(m);
	for(int i=0;i<m;i++)
	{
	    cin>>b[i];
	}
	unordered_map<int,int>f;
	unordered_map<int ,int>f1;
	for(int i=0;i<n;i++)
	{
	    f[a[i]]++;
	}
	for(int i=0;i<m;i++)
	{
	    f1[b[i]]++;
	}
	vector<int>out;
    int fo=0;
	for(auto it:f1)
	{
	    int v=it.first;
	    int c=it.second;
	    if(f[v]<c)
	    {
	        out.push_back(v);
	        fo=1;
	    }
	}
	if(!fo)
	{
	    cout<<-1<<endl;
	}
	else
	{
	    sort(out.begin(),out.end());
	    for(int x:out)
	    {
	        cout<<x<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}
