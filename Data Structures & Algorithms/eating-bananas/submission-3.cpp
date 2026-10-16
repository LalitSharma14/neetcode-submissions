class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int high=0;
        for(auto it: piles){
            high=max(high,it);
        }
        int low=1;
        int ans=0;
        while(low<=high){
            int mid=high-(high-low)/2;
            long long htaken=0;
            for(int i=0; i<piles.size(); i++){
                htaken+=ceil((double)piles[i]/mid);
            }
            if(h>=htaken){
                ans=mid;
                high=mid-1;
            }
            else{ 
                low=mid+1;
            }
        }
        return ans;
    }
};
