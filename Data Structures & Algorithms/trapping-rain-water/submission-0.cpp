class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        int l=0;
        int r=n-1;
        int total=0;
        int leftmax=height[0];
        int rightmax=height[n-1];
        while(l<=r){
            if(leftmax<rightmax){
                if(height[l]>=leftmax){
                    leftmax=height[l];
                }
                else{
                    total+=leftmax-height[l];
                }
                l++;
            }
            else{
                if(height[r]>=rightmax){
                    rightmax=height[r];
                }
                else{
                    total+=rightmax-height[r];
                }
                r--;
            }
        }
        return total;
    }
};
