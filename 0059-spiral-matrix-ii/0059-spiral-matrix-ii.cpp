class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>>a(n,vector<int>(n,0));
        int x=1;
        for(int i=0;i<n/2;i++){
            for(int j=i;j<n-i-1;j++) a[i][j]=x++;
            for(int j=i;j<n-i-1;j++) a[j][n-i-1]=x++;
            for(int j=n-i-1;j>i;j--) a[n-i-1][j]=x++;
            for(int j=n-i-1;j>i;j--) a[j][i]=x++;
        }
        if(n%2){
            a[n/2][n/2]=x;
        }
        return a;
    }
};