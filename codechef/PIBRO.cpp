#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        vector<int>out;
        int l=0,z=0,ans=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='0')
            {
                out.push_back(i);
            }
            while(z<out.size() && out.back()-out[z]+1>k)
            {
               l=out[z]+1;
               z++;
            }
            ans=max(ans,i-l+1);
        }
        cout<<ans<<endl;
    }
    return 0;
}