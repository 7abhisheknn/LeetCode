class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int lenr=grid.size()+1;
        int lenc=grid[0].size()+1;
        vector<vector<int>> c(lenr,vector<int>(lenc,0));
        for(int i=0;i<lenc;i++){
            c[0][i]=INT_MAX;
        }
        for(int i=0;i<lenr;i++){
            c[i][0]=INT_MAX;
        }
        c[1][1]=grid[0][0];
        for(int j=2;j<lenc;j++){
            c[1][j]=min(c[1][j-1],c[0][j])+grid[0][j-1];
        }
        for(int i=2;i<lenr;i++){
            for(int j=1;j<lenc;j++){
                c[i][j]=min(c[i][j-1],c[i-1][j])+grid[i-1][j-1];
            }
        }
        return c[lenr-1][lenc-1];
    }
};
