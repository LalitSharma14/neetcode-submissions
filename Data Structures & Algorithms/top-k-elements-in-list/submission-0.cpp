class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int,int> mpp;
        for(auto it: nums){
            mpp[it]++;
        }
        vector<vector<int>> bucket(n+1);
        for(auto it: mpp){
            bucket[it.second].push_back(it.first);
        }
        vector<int> ans;
        for(int i=nums.size(); i>0; i--){
            for(auto it :bucket[i]){
                ans.push_back(it);
            }
            if(ans.size()==k){
                return ans;
            }
        }
        return {-1};
    }
};
