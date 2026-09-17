#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;
void solve() 
{
    int n;
    cin>>n;
    unordered_map<string,int>counts;
    for (int i = 0; i < n; i++) {
        string code;
        cin>>code;
        counts[code]++;
    }
    cout<<counts["START38"] <<" "<< counts["LTIME108"]<<"\n";
}
int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}