class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<int> r(matrix.size(), 0), c(matrix[0].size(), 0);
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                if(matrix[i][j]==0){
                    r[i] = 1; c[j] = 1;
                }
            }
        }
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                if(r[i]==1 || c[j]==1) matrix[i][j]=0;
            }
        }
    }
};
