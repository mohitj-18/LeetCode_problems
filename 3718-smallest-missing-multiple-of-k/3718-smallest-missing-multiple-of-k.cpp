class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int n =nums.size();
        sort(nums.begin(),nums.end());
        int j =1;
        while(j<=n){
        bool indicate = false;
        for(int i =0;i<n;i++){
            if(nums[i] == k*j){
                indicate = true;
                break;
            }
        }
        if(indicate){
            j++;
        }
        else{
            return k*j;
        }
        }
        return j*k;
    }
};