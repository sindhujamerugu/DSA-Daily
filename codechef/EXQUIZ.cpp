
#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,s;
        cin>>n>>s;
        if(s==0)
        {
            cout<<0<<endl;
        }
        else
        {
            int out=-1;
            for(int i=1;i<=n;i++)
            {
                if((i+s)%5==0)
                {
                    int s1=(i+s)/5;
                    if(s1>=0&&s1<=i)
                    {
                    out=i;
                        break;
                    }
                }
            }
            cout<<out<<endl;
        }
    }
    return 0;
}
