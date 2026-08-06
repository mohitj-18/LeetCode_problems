class Solution {
public:
    int sum(int n){
        int val =0;
        while(n>0){
            int digit = n%10;
            val+=digit*digit;
            n = n/10;
        }
        return val;
    }
    bool isHappy(int n) {
        unordered_set<int>set;
        while(n!=1 && set.find(n) == set.end()){
            set.insert(n);
            n = sum(n);
        }
        return  n==1;
    }
};