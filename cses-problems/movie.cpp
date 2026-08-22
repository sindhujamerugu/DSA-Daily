#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<pair<int,int>>ans;
    for(int i=0;i<n;i++)
    {
        int s,e;
        cin>>s>>e;
        ans.push_back({e,s});
    }
    sort(ans.begin(),ans.end());
    int cnt=0,le=0;
    for(auto it:ans)
    if(it.first>=le)
    {
        cnt++;
        le=it.second;
    }
    cout<<cnt<<endl;
    return 0;

}