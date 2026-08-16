class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows>=s.length() || numRows==1){
            return s;
        }
        vector<string>v(numRows);
        int row =0;
        int direc;

        for(char c:s){
            v[row]+=c;
            if(row == 0){
                direc =1;
            }
            if(row == numRows-1){
                direc =-1;
            }
            row+=direc;
        }
        string ans ="";
        for(string p : v){
            ans+=p;
        }
        return ans;
    }
};