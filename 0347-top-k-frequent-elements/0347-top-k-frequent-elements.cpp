class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int>arr;
        unordered_map<int,int>mp;
        for(int i =0;i<n;i++){
            mp[nums[i]]++;
        }
        vector<pair<int,int>>vec;
        for(auto c : mp){
            vec.push_back({c.second,c.first});
        }
        sort(vec.rbegin(),vec.rend());
        for(int i =0;i<k;i++){
            arr.push_back(vec[i].second);
        }
        return arr;
    }
};