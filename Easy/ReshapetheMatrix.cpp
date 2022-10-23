class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int row = mat.size();
        int col = mat[0].size();
        
        if((row * col) != (r * c))
            return mat;
        
        int newR = 0;
        int newC = 0;
         vector<vector<int>> v(r , vector<int> (c, 0)); 
        for(int i = 0; i < row; i++){
            for(int j = 0; j < col; j++){
                v[newR][newC] = mat[i][j];
                newC++;
                if(newC == c){
                    newR++;
                    newC = 0;
                }
            }
        }
        return v;
    }
};
