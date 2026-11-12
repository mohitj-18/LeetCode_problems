class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int n = nums.size();
        int ans =1;
        int p = nums[0];
        int final =1;
        for(int i =1;i<n;i++){
            if(nums[i]>p){
                ans++;
            }
            else{
                ans =1;
            }
            p =nums[i];
            final = max(final,ans);
        }
        int an =1;
        p = nums[0];
        int final1=1;
        for(int i =1;i<n;i++){
            if(nums[i]<p){
                an++;
            }
            else{
                an =1;
            }
            p =nums[i];
            final1 = max(final1,an);
        }
        return max(final,final1);
    }
};