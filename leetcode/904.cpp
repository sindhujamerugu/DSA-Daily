class Solution {
public:
    int totalFruit(vector<int>& fruits) 
    {
       int n=fruits.size();
       unordered_map<int,int>freq;
       set<int>s;
       int l=0,ans=0;
       for(int r=0;r<n;r++)
       {
           freq[fruits[r]]++;
           s.insert(fruits[r]);
           while(s.size()>2)
           {
              freq[fruits[l]]--;
              if(freq[fruits[l]]==0)
              {
                freq.erase(fruits[l]);
                s.erase(fruits[l]);
              }
              l++;
           }
           ans=max(ans,r-l+1);
       }
       return ans;
    }
};