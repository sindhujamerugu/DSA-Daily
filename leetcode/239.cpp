class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& arr, int k) {
        int n=arr.size();
        deque<int>dq;
        vector<int>out;
        for(int i=0;i<k;i++) 
        {
            while(!dq.empty()&&arr[dq.back()]<=arr[i]) 
            {
                dq.pop_back();
            }
            dq.push_back(i);
        }
        out.push_back(arr[dq.front()]);
        for (int i=k;i<n;i++) {
            while(!dq.empty() && dq.front()<=i-k)
            {
                dq.pop_front();
            }
            while(!dq.empty() && arr[dq.back()] <= arr[i]) 
            {
                dq.pop_back();
            }
            dq.push_back(i);
            out.push_back(arr[dq.front()]);
        }
        return out;
    }
};