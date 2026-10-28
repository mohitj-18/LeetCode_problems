class Solution {
public:
    bool doesAliceWin(string s) {
        int sum =0;
        for(int i =0;i<s.size();i++){
            if(s[i] == 'a' || s[i] == 'e'|| s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
                sum++;
            }
        }
        if(sum == 0){
            return false;
        }
        return true;
    }
};