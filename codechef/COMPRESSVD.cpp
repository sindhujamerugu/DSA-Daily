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
	   vector<int>arr(n);
	   for(int i=0;i<n;i++)
	   {
	       cin>>arr[i];
	   }
	   long long cnt=0;
	   if(n==1)
	   {
	       cout<<1<<endl;
	       continue;
	   }
	   for(int i=0;i<n;i++)
	   {
	       if(arr[i]!=arr[i+1])
	       {
	           cnt++;
	       }
	   }
	   cout<<cnt<<endl;
	}
	return 0;
}
