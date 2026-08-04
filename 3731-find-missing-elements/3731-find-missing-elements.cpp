class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int>arr;
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int a = nums[0];
        int b = nums[n-1];
        int i =1;
        while(a<b){
            if(nums[i] != a+1){
                arr.push_back(a+1);
            }
            else{
                i++;
            }
            a++;
        }
        return arr;
    }
};