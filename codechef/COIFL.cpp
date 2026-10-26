#include <bits/stdc++.h>
using namespace std;
const int m=1000000007;
int main() 
{
	int s;
	cin>>s;
	vector<int>cn(s+1,0);
	cn[0]=1;
	for(int x=1;x<=s;x++)
	{
	    for(int y=1;y<=2;y++)
	    {
	        if(y<=x)
	        {
	            cn[x]=(cn[x]+cn[x-y])%m;
	        }
	    }
	}
	cout<<cn[s]<<endl;
}
