class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>arr;
        int j,k;
        int n =nums.size();
        sort(nums.begin(),nums.end());
        for(int i =0;i<n-2;i++){
            if(i>0 && nums[i] == nums[i-1]) continue;
            j = i+1;
            k = n-1;
            while(j<k){
                int sum = nums[i] +nums[j] +nums[k];
                if(sum ==0){
                    arr.push_back({nums[i],nums[j],nums[k]});
                    j++;
                    k--;
                    while(j<k && nums[j] == nums[j-1]){
                    j++;
                }
                }
                if(sum<0){
                    j++;
                }
                if(sum>0){
                    k--;
                }
            }
        }
        return arr;
    }
};