class Solution {
 private:
     void bfs(int row ,int col, vector<vector<int>>& visi,vector<vector<char>>grid){
        visi[row][col] = 1;
        queue<pair<int,int>>q;
        q.push({row,col});
        int n = grid.size();
        int m = grid[0].size();
        while(!q.empty()){
            int row = q.front().first;
            int col = q.front().second;
            q.pop();
            for(int p = -1;p<=1;p++){
                for(int k =-1;k<=1;k++){
                    if(p!=0 && k!=0){
                        continue;
                    }
                    int nrow = row+p;
                    int ncol = col+k;
                    if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && grid[nrow][ncol] == '1' &&  !visi[nrow][ncol]){
                        visi[nrow][ncol] =1;
                        q.push({nrow,ncol});
                    }
                }
            }
        }
     }

public:
    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>>visi(n,vector<int>(m,0));
        int count =0;
        for(int i =0;i<n;i++){
            for(int j =0;j<m;j++){
                if(!visi[i][j] && grid[i][j] == '1'){
                    count++;
                    bfs(i,j,visi,grid);
                }
            }
        }
        return count;
    }
};