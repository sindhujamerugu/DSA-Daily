#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<long long>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    long long cnt=0;
    for(int i=0;i<n;i++)
    {
        if((cnt+1)<v[i])
        {
            break;
        }
        else
        {
            cnt+=v[i];
        }
    }
    cout<<cnt+1<<endl;
    return 0;
}