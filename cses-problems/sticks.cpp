#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    int m=arr[n/2];
    long long ans=0;
    for(int i=0;i<n;i++)
    {
        ans+=abs(1LL*arr[i]-m);
    }
    cout<<ans<<endl;
    return 0;
}