class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n=heights.size();
        int l=0;
        int r=n-1;
        int maxi=0;
        while(l<r){
            int curr=1LL*(r-l)*min(heights[l],heights[r]);
            maxi=max(maxi,curr);
            if(heights[l]>=heights[r]){
                r--;
            }
            else{
                l++;
            }
            
        }
        return maxi;
    }
};
