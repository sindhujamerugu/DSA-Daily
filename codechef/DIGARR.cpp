
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int d;
        cin>>d;
        string s;
        cin>>s;
        int f=0;
        for(char c:s)
        {
            if(c=='0' || c=='5')
            {
                f=1;
                break;
            }
        }
        if(f)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
    }

    return 0;
}
