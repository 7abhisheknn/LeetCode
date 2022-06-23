class Solution {
public:
    int uniquePaths(int m, int n) {
        int v[m][n];
        for(int i=m-1;i>=0;i--){
            for(int j=n-1;j>=0;j--){
                if(i==m-1){v[i][j]=1;continue;}
                if (j==n-1){v[i][j]=1;continue;}
                v[i][j]=v[i+1][j]+v[i][j+1];
            }
        }
        return v[0][0];
    }
};
