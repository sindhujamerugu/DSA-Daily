#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--) 
    {
        int n;
        cin>>n;
        int mx=(n+1)/2;
        int mn=(n+2)/3;
        cout<<mx<<" "<<mn<<endl;
    }
    return 0;
}