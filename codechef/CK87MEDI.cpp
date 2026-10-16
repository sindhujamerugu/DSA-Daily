#include <bits/stdc++.h>
using namespace std;

int main() 
{
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,k;
	    cin>>n>>k;
	    vector<int>arr(n);
	    for(int i=0;i<n;i++)
	    {
	       cin>>arr[i]; 
	    }
	    sort(arr.begin(),arr.end());
	    cout<<arr[(n+k)/2]<<endl;
	}
    return 0;
}
