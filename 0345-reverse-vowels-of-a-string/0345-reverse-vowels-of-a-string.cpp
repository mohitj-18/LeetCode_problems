class Solution {
public:
    string reverseVowels(string s){
        string v = "aeiouAEIOU";
        int i = 0;
        int j = s.size()-1;
        while(i < j){
            if(v.find(s[i]) == string::npos){
                i++;
            }
            else if(v.find(s[j]) == string::npos){
                j--;
            }
            else{
                swap(s[i],s[j]);
                i++;
                j--;
            }
        }
        return s;
    }
};