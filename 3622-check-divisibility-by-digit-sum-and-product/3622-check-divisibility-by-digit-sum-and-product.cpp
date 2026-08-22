class Solution {
public:
    bool checkDivisibility(int n) {
        int p =n;
        int prod =1;
        int sum =0;
        while(n>0){
            int k = n%10;
            prod*=k;
            sum+=k;
            n = n/10;
        }
        int final = prod+sum;
        if(p%final == 0){
            return true;
        }
        return false;
    }
};