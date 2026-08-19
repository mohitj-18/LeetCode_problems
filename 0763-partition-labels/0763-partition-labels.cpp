class Solution {
public:
    vector<int> partitionLabels(string s) {
        int n = s.length();
        vector<int>ans;
        int nums[26];
        for(int i =0;i<n;i++){
            nums[s[i]-'a'] =i;
        }
        int start =0;
        int end =0;
        for(int i =0;i<n;i++){
            end = max(end,nums[s[i]-'a']);
            if(end ==i){
                ans.push_back(end-start+1);
                start=i+1;
            }     
        }
        return ans;
    }
};