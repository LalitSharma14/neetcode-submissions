class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n=s2.size();
        int l=0;
        int r=0;
        int count=s1.size();
        unordered_map<char,int> mpp1;
        unordered_map<char,int> mpp;
        for(int i=0; i<s1.size(); i++){
            mpp[s1[i]]++;
        }
        while(r<n){
            if(mpp[s2[r]]>0){
                count--;
            }
            mpp[s2[r]]--;
            if(r-l+1>s1.size()){
                mpp[s2[l]]++;
                if(mpp[s2[l]]>0){
                    count++;
                }
                l++;
            }
            if(count==0){
                return true;
            }
            r++;
        }
        return false;
    }
};
