
#include <bits/stdc++.h>
using namespace std;
int main() 
{
	// your code goes here
	int n;
	cin>>n;
	vector<int>arr(n);
	for(int i=0;i<n;i++)
	{
	    cin>>arr[i];
	}
	unordered_map<int,int>freq;
	for(int x:arr)
	{
	   freq[x]++;
	}
	vector<int>nums;
	for(int x:arr)
	{
	 
	    if(freq[x]>=1)
	    {
	       nums.push_back(x);
	       freq[x]=0;
	    }
	}
	for(int y:nums)
	{
	    cout<<y<<" ";
	}
	cout<<endl;
	return 0;
}
