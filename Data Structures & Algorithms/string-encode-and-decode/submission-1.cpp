class Solution {
public:

    string encode(vector<string>& strs) {
        string ans;
        for (string &s : strs) {
            ans += to_string(s.size())+"#"+s;
        }
        return ans;
    }

    vector<string> decode(string s) {
        vector<string> ans;
        int i=0;
        while(i<s.size()){
            int j=i;
            while(s[j]!='#'){
                j++;
            }
            int num=stoi(s.substr(i,j-i));
            string curr=s.substr(j+1,num);
            ans.push_back(curr);
            i=j+1+num;
        }
        return ans;
    }
};
