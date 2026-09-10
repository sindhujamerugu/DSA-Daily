#include <bits/stdc++.h>
using namespace std;

int main() 
{
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
         vector<int>arr(4);
         for(int i=0;i<4;i++)
         {
             cin>>arr[i];
         }
         sort(arr.begin() ,arr.end());
         int f=0;
         for(int i=0;i<4;i+=2)
         {
             if(arr[i]!=arr[i+1])
             {
                f=1;
                break;
             }
         }
         if(f)
         {
             cout<<"NO"<<endl;
         }
         else
         {
             cout<<"YES"<<endl;
         }
	    
	
	}
	return 0;

}
