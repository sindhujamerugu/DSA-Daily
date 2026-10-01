#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,k;
        cin>>n>>k;
        vector<long long>arr(n);
        for(long long i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        const long long mod=998244353;
        long long ans=1;
        for(long long i=1;i<=k;i++)
        {
            ans=(ans*i)%mod;
        }
        for(long long i=0;i<n-k;i++)
        {
            ans=(ans*k)%mod;
        }
        cout<<ans<<endl;
    }
    return 0;
	// your code goes here

}
