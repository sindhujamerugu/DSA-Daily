#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    map<long long , long long>mp;
    for(int i=0;i<n;i++)
    {
        long long a,b;
        cin>>a>>b;
        mp[a]++;
        mp[b]--;
    }
    long long sum=0;
    long long maxi=0;
    for(auto it:mp)
    {
        sum+=it.second;
        maxi=max(sum,maxi);
    }
    cout<<maxi<<endl;
    return 0;
}