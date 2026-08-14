class Solution {
public:
    int maximumLengthSubstring(string s) {
        int arr[26] = {};
        int n = s.length();
        int i =0;
        int j =0;
        int ans =0;
        while(j<n){
            arr[s[j]-'a']++;
            while(arr[s[j] -'a'] >2){
                arr[s[i]-'a']--;
                i++;
            }
            ans = max(ans,j-i+1);
            j++;
        }
        return ans;
    }
};