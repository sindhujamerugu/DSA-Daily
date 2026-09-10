class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) 
    {
        int n=temperatures.size();
        stack<int>st;
        unordered_map<int,int>freq;
        vector<int>ans;
        for(int i=n-1;i>=0;i--)
        {
            int ele=temperatures[i];
            while(!st.empty() && temperatures[st.top()]<=ele)
            {
                st.pop();
            }
            if(!st.empty())
            {
                freq[i]=st.top()-i;
            }
            else
            {
            freq[i]=0;
            }
            st.push(i);
        }
        for(int i:temperatures)
        {
            ans.push_back(freq[]);
        }
        return ans;
    }
};