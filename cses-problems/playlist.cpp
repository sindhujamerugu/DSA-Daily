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
    map<int,int>mp;
    int ans=1;
    int i=0,j=0;
    while(j<n)
    {
         mp[arr[j]]++;
        while(mp[arr[j]]>1)
        {
            mp[arr[i]]--;
            if(mp[arr[i]]==0)
            {
                mp.erase(arr[i]);
            }
            i++;
        }
        ans=max(ans,(int)mp.size());
        j++;
    }
    cout<<ans<<endl;
    return 0;
}