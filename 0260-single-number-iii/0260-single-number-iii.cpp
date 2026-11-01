class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        vector<int>v;
        unordered_map<int,int>mp;
        int n = nums.size();
        for(int i =0;i<n;i++){
            mp[nums[i]]++;
        }
        for(auto it :mp){
            if(it.second ==1){
                v.push_back(it.first);
            }
        }
        return v;
    }
};