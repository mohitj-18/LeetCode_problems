class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        unordered_map<string,int>mp;
        vector<string>str;
        for(int i =0;i<s.length();i++){
            string p = s.substr(i,10);
            mp[p]++;
        }
        for(auto it: mp){
            if(it.second>1){
                str.push_back(it.first);
            }
        }
        return str;
    }
};