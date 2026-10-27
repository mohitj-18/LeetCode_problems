class Solution {
public:
    vector<string> createGrid(int m, int n) {
        vector<string> g(m,string(n,'#'));
        for(int i=0;i<m;i++) g[i][0]='.';
        for(int j=1;j<n;j++) g[m-1][j]='.';
        return g;
    }
};