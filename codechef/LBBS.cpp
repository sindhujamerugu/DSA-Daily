#include <bits/stdc++.h>
using namespace std;
int main() 
{
	string s;
	cin>>s;
	long long n=s.size();
	long long k;
	cin>>k;
	long long maxi=0;
	long long c1=0,cnt=0;
    for(long long i=0;i<n;i++)
    {
        long long c1=0,c0=0;
        for(long long j=i;j<n;j++)
        {
            if(s[j]=='1')
            {
                c1++;
            }
            else
            {
               c0++; 
            }
            long long l=j-i+1;
            if(l%2==0)
            {
             long long f=abs(c1-c0)/2;
             if(f<=k)
             {
               maxi=max(maxi,l);
             }
            }
        }
    }
    cout<<maxi<<endl;
	return 0;
}
