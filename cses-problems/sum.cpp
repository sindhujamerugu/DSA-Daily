#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,x;
    cin>>n>>x;
    vector<long long>arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    map<long long,int>freq;
    for(int i=0;i<n;i++)
    {
        long long need=x-arr[i];
        if(freq.count(need))
        {
            cout<<freq[need]+1<<" "<<i+1<<endl;
            return 0;
        }
        freq[arr[i]]=i;
    }
    cout<<"IMPOSSIBLE"<<endl;
   
    return 0;
}