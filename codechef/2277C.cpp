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
      for(int i=0;i<n;i++)
      {
          cin>>arr[i];
      }
      vector<int>pref(n);
      pref[0]=arr[0]%k;
      for(int i=1;i<n;i++)
      {
          pref[i]=(pref[i-1]+arr[i])%k;
      }
      vector<int>freq(k,0);
      long long cnt=0;
      int j=0;
      for(int i=1;i<=n;i++)
      {
          while(i-j>k)
          {
              freq[pref[j]]++;
              j++;
          }
          cnt+=freq[pref[i]];
      }
      cout<<cnt<<endl;
    }
    return 0;
}