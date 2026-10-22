class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) 
    {
        vector<int>adj[n+1];
        for(auto e:edges)
        {
            int u=e[0];
            int v=e[1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        vector<bool>v(n+1,false);
        queue<int>q;
        q.push(source);
        v[source]=true;
        while(!q.empty())
        {
         int nd=q.front();
         q.pop();
         if(nd==destination)
         {
           return true;
         }
         for(int ng:adj[nd])
         {
           if(!v[ng])
           {
            v[ng]=true;
            q.push(ng);
           }
          }
        }
        return false;   
    }
};