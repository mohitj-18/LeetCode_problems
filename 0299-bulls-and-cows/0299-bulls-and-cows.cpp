class Solution {
public:
    string getHint(string secret, string guess) {
        int n = secret.length();
        int x=0;
        int y =0;
        vector<int>s(10,0);
        vector<int>g(10,0);
        for(int i =0;i<n;i++){
            if(secret[i] == guess[i]){
                x++;
            }
            else{
                s[secret[i]-'0']++;
                g[guess[i]-'0']++;
            }
        }
        for(int i =0;i<10;i++){
            y+=min(s[i],g[i]);
        }
        string p = to_string(x);
        string q = to_string(y);
        string final =p+"A"+q+"B";
        return final;
    }
};