class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int>ans;
        int n = nums.size();
        int count =0;
        for(int i =0;i<n;i++){
            if(nums[i]<pivot){
                ans.push_back(nums[i]);
            }
            else if(nums[i]==pivot){
                count++;
            }
        }
        while(count--){
            ans.push_back(pivot);
        }
        for(int i =0;i<n;i++){
            if(nums[i]>pivot){
                ans.push_back(nums[i]);
            }
        }
        return ans;
    }
};