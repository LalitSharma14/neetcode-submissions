class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n=strs.size();
        unordered_map<string,vector<string>> mpp;
        for(int i=0; i<n; i++){
            string curr=strs[i];
            sort(curr.begin(),curr.end());
            mpp[curr].push_back(strs[i]);
        }
        vector<vector<string>> ans;
        for(auto it: mpp){
            auto temp=it.second;
            ans.push_back(temp);
        }
        return ans;
    }
};
