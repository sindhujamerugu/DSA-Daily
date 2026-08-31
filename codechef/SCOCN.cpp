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
    int c=0,in=-1;
	for(int i=0;i<n;i++)
	{
         int x;
         cin>>x;
         if(arr[i]==x)
         {
             c++;
             if(c==2)
             {
                 in=i;
             }
         }
	}
	if(c==1)
	{
	    cout<<-2<<endl;
	}
	else if(c==0)
	{
	    cout<<-1<<endl;
	}
	else
	{
	    cout<<in<<endl;
	}
	return 0;
}
