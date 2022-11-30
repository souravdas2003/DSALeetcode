class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        //Finding length of row
        int row=matrix.size();
        //Transpose the matrix
        for(int i=0;i<row;i++){
            for(int j=0;j<i;j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        //Reverse the matrix
        for(int i=0;i<row;i++){
            reverse(matrix[i].begin(),matrix[i].end());
        }
    }
};