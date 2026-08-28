class Solution {
public:
    int maxArea(vector<int>& height) 
    {
        int l=0,r=height.size()-1;
        int mw=0;
        while(l<r)
        {
            int ht=min(height[l],height[r]);
            int wdh=r-l;
            int water=ht*wdh;
            mw=max(mw,water);
            if(height[l]<height[r])
            {
                l++;
            }
            else
            {
                r--;
            }
        }
        return mw;
    }
};