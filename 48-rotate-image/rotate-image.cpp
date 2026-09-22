class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        vector<vector<bool>> filled(n,vector<bool>(n,false));
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(!filled[i][j]){
                    swap(matrix[i][j],matrix[j][n-i-1]);
                    filled[i][j]=true;
                    filled[j][n-i-1]=true;
                }
            }
        }
    }
};