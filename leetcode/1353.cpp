class Solution {
public:
    int maxEvents(vector<vector<int>>& events) 
    {
        int n=events.size();
        sort(events.begin(),events.end());
        priority_queue<int,vector<int>,greater<int>>pq;
        int i=0,d=1,cnt=0;
        while(i<n || !pq.empty())
        {
          while(i<n && events[i][0]<=d)
          {
            pq.push(events[i][1]);
            i++;
          }
        
        while(!pq.empty() && pq.top()<d)
        {
            pq.pop();
        }
        if(!pq.empty())
        {
           pq.pop();
           d++;
           cnt++; 
        }
        else if(i<n)
        {
           d=events[i][0];
        }  
        }
        return cnt;
    }
};