class NumMatrix {
private:
    vector<vector<int>> prefix;

public:
    NumMatrix(vector<vector<int>>& matrix) {
        int i,j;
        int m=matrix.size(),n=matrix[0].size();
        prefix = vector<vector<int>>(m,vector<int>(n,0));
        for(i=0;i<m;i++){
            for(j=0;j<n;j++){
                prefix[i][j]=matrix[i][j];
                if(i>0) prefix[i][j]+=prefix[i-1][j];
                if(j>0) prefix[i][j]+=prefix[i][j-1];
                if(i>0&&j>0) prefix[i][j]-=prefix[i-1][j-1];
            }
        }
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        int res=prefix[row2][col2];
        if(row1>0) res-=prefix[row1-1][col2];
        if(col1>0) res-=prefix[row2][col1-1];
        if(row1>0&&col1>0) res+=prefix[row1-1][col1-1];
        return res;
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */