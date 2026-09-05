class Solution {
public:
    int characterReplacement(string s, int k) {
        int maxi=0;
        int maxfreq=0;
        int l=0;
        int r=0;
        int n=s.size();
        unordered_map<char,int> mpp;
        while(r<n){
            mpp[s[r]]++;
            maxfreq=max(maxfreq,mpp[s[r]]);
            while(r-l+1-maxfreq>k){
                mpp[s[l]]--;
                l++;
            }
            maxi=max(maxi,r-l+1);
            r++;
        } 
        return maxi;
    }
};
