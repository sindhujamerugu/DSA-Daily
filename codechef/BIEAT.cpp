#include <bits/stdc++.h>
using namespace std;

int main() 
{
	// your code goes here
	int n;
	cin>>n;
	vector<int>arr(n);
	vector<int>nums;
	for(int i=0;i<n;i++)
	{
	    cin>>arr[i];
	}
	int m;
	cin>>m;
	for(int i=0;i<n;i++)
	{
	    int res=arr[i]>>m;
	    nums.push_back(res);
	}
	for(int y:nums)
	{
	    cout<<y<<" ";
	}
    return 0;
}
