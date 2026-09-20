class Solution {
private: 
    void dfs(vector<vector<int>>image ,vector<vector<int>>&dimage,int sr,int sc,int color,int icolor,int arow[],int acol[]){
        dimage[sr][sc] = color;
        int n = image.size();
        int m  = image[0].size();
        for(int i =0;i<4;i++){
            int nrow = sr+ arow[i];
            int ncol = sc + acol[i];
            if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && dimage[nrow][ncol] != color && image[nrow][ncol] == icolor){
                dfs(image,dimage,nrow,ncol,color,icolor,arow,acol);
            }
        }
    }



public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int icolor = image[sr][sc];
        vector<vector<int>>dimage = image;
        int arow[] = {-1,0,1,0};
        int acol[] = {0,1,0,-1};
        dfs(image,dimage,sr,sc,color,icolor,arow,acol);
        return dimage;
    }
};