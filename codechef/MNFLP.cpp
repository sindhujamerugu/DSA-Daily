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
	    vector<int>ar;
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    int sum=0;
	    int i=0,j=n-1;
	    while(i<=j)
	    {
	        if(i==j)
	        {
	            ar.push_back(arr[i]);
	            i++;
	            j--;
	        }
	        else
	        {
	           ar.push_back(arr[i]);
	           ar.push_back(arr[j]);
	           i++;
	           j--;
	        }
	    }
	    int z=0,o=0;
	    for(int u:ar)
	    {
	        if(u==1)
	        {
	            o++;
	        }
	        else
	        {
	            z++;
	        }
	    }
	    if(n%2!=0)
	    {
	        cout<<-1<<endl;
	    }
	    else
	    {
	        cout<<abs(o-n/2)<<endl;
	    }
	}
	return 0;
}
