class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int>mp;
        int n = s.length();
        for(int i =0;i<n;i++){
            mp[s[i]]++;
        }
        vector<pair<int,char>>v;
        for(auto j: mp){
            v.push_back({j.second,j.first});
        }
        sort(v.rbegin(),v.rend());
        string p ="";
        for(auto j : v){
            p+=string(j.first,j.second);
        }
        return p;
    }
};