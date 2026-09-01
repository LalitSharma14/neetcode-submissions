class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st;
        for(auto &it: nums){
            st.insert(it);
        }
        int len=0;
        for(auto it:st){
            int curr=it;
            if(st.find(curr-1)==st.end()){
                int start=curr;
                int currlen=1;
                while(st.find(start+1)!=st.end()){
                    currlen++;
                    start++;
                }
                len=max(len,currlen);
            }
        }
        return len;
    }
};
