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
	   int out=0;
	   for(int i=0;i<n;i++)
	   {
	       int odd=0;
	       for(int j=i;j<n;j++)
	       {
	           if(arr[j]%2!=0)
	           {
	               odd++;
	           }
	           if(odd%2==0)
	           {
	             out=max(out,j-i+1);
	           }
	       }
	   }
	   cout<<out<<endl;
	}
	return 0;
}
