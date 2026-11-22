class Solution {
public:
    bool checkString(string s) {
        int n = s.length();
        int check =0;
        for(int i =0;i<n;i++){
            if(s[i] =='b'){
                check =1;
            }
            if(check){
                if(s[i]=='a'){
                    return false;
                }
            }
        }
        return true;
    }
};