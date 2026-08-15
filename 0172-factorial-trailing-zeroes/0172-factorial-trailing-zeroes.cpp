class Solution {
public:
    int trailingZeroes(int n) {
        int prod =5;
        int sum=0;
        while((n/prod)>0){
            sum+=n/prod;
            prod *=5;
        }
        return sum;
    }
};