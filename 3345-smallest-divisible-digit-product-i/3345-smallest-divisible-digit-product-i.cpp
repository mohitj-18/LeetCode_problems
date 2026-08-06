class Solution {
public:
    int product(int n){
        int prod =1;
        while(n>0){
            int k = n%10;
            prod*=k;
            n = n/10;
        }
        return prod;
    }
    int smallestNumber(int n, int t) {
        while(product(n)%t !=0){
            n++;
        }
        return n;
    }
};