class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> prefix(n,0);
        prefix[0]=nums[0];
        for(int i=1; i<n; i++){
            prefix[i]=prefix[i-1]*nums[i];
        }
        int product=1;
        vector<int> ans(n,0);
        for(int i=n-1; i>0; i--){
            ans[i]=prefix[i-1]*product;
            product*=nums[i];
        }
        ans[0]=product;
        return ans;
    }
};
