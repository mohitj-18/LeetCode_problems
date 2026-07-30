class Solution {
public:
    int minimumPushes(string word) {
        int sum = word.length();
        int ans =0;
        if(sum<=8){
            ans =sum;
        }
        else if(sum<=16 && sum>8){
            ans = (sum - 8)*2 + 8;
        }
        else if(sum>16 && sum<=24){
            ans = 24+(sum -16)*3;
        }
        else{
            ans = 48 + (sum-24)*4;
        }
        return ans;
    }
};