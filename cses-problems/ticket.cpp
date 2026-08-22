#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    vector<int>arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    vector<int>arr1(m);
    for(int i=0;i<m;i++)
    {
        cin>>arr1[i];
    }
    multiset<int>ms;
    for(int x:arr)
    {
        ms.insert(x);
    }
    for(int x:arr1)
    {
        auto it=ms.upper_bound(x);
        if(it==ms.begin())
        {
            cout<<-1<<endl;
        }
        else
        {
            it--;
            cout<<*it<<endl;
            ms.erase(it);
        }
    }
    return 0;
}