class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n = nums.size();
        int minimum = INT_MAX;
        int maximum = INT_MIN;
        for(int i =0;i<n;i++){
            minimum = min(nums[i],minimum);
            maximum = max(nums[i],maximum);
        }
        int p;
        int q;
        for(int i =0;i<n;i++){
            if(nums[i] == minimum){
                p =i;
            }
            if(nums[i] == maximum){
                q = i;
            }
        }
        return min({max(p,q)+1,n-min(p,q),min(p,q)+n-max(p,q)+1});
    }
};