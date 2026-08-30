class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int n = board.size();
        int m = board[0].size();
        for(int i =0;i<n;i++){
            unordered_map<int,int>mp;
            for(int j =0;j<m;j++){
                if(board[i][j] != '.'){
                mp[board[i][j]]++;
                if(mp[board[i][j]]>1){
                    return false;
                }
                }
            }
        }
        for(int j =0;j<n;j++){
            unordered_map<int,int>mp;
            for(int i =0;i<m;i++){
                if(board[i][j] != '.'){
                mp[board[i][j]]++;
                if(mp[board[i][j]]>1){
                    return false;
                }
                }
            }
        }
        for(int row = 0; row < 9; row += 3){
            for(int col = 0; col < 9; col += 3){
                unordered_map<char, int> mp;
                for(int i = row; i < row + 3; i++){
                    for(int j = col; j < col + 3; j++){
                        if(board[i][j] != '.'){
                            mp[board[i][j]]++;
                            if(mp[board[i][j]] > 1){
                                return false;
                            }
                        }
                    }
                }
            }
        }
        return true;
    }
};