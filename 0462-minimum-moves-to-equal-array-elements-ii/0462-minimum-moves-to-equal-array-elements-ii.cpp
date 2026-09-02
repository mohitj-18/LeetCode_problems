class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int sum =0;
        for(int i =0;i<n;i++){
            sum+=nums[i];
        }
        int avg = sum/n;
        int count =0;
        for(int i =0;i<n;i++){
            if(avg>nums[i]){
                count+=(avg-nums[i]);
            }

            else{
                count+=(nums[i]-avg);
            }
        }
        return count;
    }
};