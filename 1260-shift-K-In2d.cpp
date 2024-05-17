class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int m = grid.size() ;
        int n = grid[0].size() ;
        vector<vector<int>> ans(m, vector<int>(n, 0));
        for( int i = 0 ; i < m ; i++){
            for( int j = 0 ; j < n ; j++){
                int col = j + k ;
                int row = i + (col / n );
                row = row % m ;
                col = col % n ; 
                ans[row][col] = grid[i][j] ;
            }
        }
        return ans ;
    }
};