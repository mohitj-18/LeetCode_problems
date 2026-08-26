class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        int n = s.length();
        vector<int> nums;
        for (int i = 0; i < n; i++) {
            if (s[i] == '1') {
                nums.push_back(i);
            }
        }
        int p = nums.size();
        if (p < k) {
            return "";
        }
        int i = 0;
        int j = k - 1;
        int ans = INT_MAX;
        while (j < p){
            ans = min(ans, nums[j] - nums[i] + 1);
            i++;
            j++;
        }
        int l = 0;
        int r = k - 1;
        string result = "";
        while (r < p){
            int len = nums[r] - nums[l] + 1;
            if (len == ans){
                string current = s.substr(nums[l], ans);
                if (result == "" || current < result){
                    result = current;
                }
            }
            l++;
            r++;
        }
        
        return result;
    }
};