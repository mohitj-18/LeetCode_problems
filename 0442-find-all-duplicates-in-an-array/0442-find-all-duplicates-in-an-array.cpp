class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int>key;
        unordered_map<int,int>mp;
        int n = nums.size();
        for(int i =0;i<n;i++){
            mp[nums[i]]++;
        }
        for(auto p: mp ){
            if(p.second >1){
                key.push_back(p.first);
            }
        }
        return key;
    }
};