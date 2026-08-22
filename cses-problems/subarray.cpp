#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<long long>arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    long long cur=arr[0];
    long long maxi=arr[0];
    for(int i=1;i<n;i++)
    {
            cur=max(arr[i],arr[i]+cur);
            maxi=max(cur,maxi);
    }
    cout<<maxi<<endl;
    return 0;
}