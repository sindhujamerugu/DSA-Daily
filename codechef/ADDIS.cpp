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
	    map<int,int>freq;
	    int maxi=0;
	    for(int i=0;i<n;i++)
	    {
	        freq[arr[i]]++;
	            maxi=max(freq[arr[i]],maxi);
	    }
	    cout<<(maxi+1)/2<<endl;
	}
	return 0;

}
