class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        string ans = "";
        for(int i =0;i<num;i++){
            int x = min(9,sum);
            ans+=char('0'+x);
            sum-=x;
        }
        if(sum > 0){
            return "";
        }
        return ans;
    }
};