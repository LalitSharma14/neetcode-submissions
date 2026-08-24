class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> mpp;
        for(auto it:s){
            mpp[it]++;
        }
        for(auto it:t){
            if(mpp.find(it)!=mpp.end()){
                mpp[it]--;
                if(mpp[it]==0){
                    mpp.erase(it);
                }
            }
            else{
                return false;
            }     
        }
        return mpp.size()==0;
    }
};
