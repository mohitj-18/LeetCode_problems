class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int n = nums.size();
        int final =0;
        bool semi =false;
        for(int i =0;i<n;i++){
            final^=nums[i];
            if(nums[i] !=0){
                semi =true;
            }
        }
        if(final){
            return n;
        }
        if(semi){
            return n-1;
        }
        return 0;
    }
};