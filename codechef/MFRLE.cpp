#include <bits/stdc++.h>
using namespace std;
int main() 
{
	// your code goes here
	string s;
	getline(cin,s);
    vector<int>freq(26,0);
    string s1="";
    for(char c:s)
    {
        s1+=tolower(c);
    }
    int maxi=0;
    for(char c:s1)
    {
        if(isalpha(c))
        freq[c-'a']++;
    }
    char ans='a';
    for(int i=0;i<26;i++)
    {
         if(freq[i]>maxi)
         {
           maxi=freq[i];
           ans=i+'a';
         }
    }
    cout<<ans<<endl;
    return 0;
}
