void rotate(int** matrix, int matrixSize, int* matrixColSize) {
    // int i=0,j=0;
    // int n = *matrixColSize;
    // int dupe[n][n];
    // for(i=0;i<n;i++)
    // {
    //     for(j=n-1;j>=0;j--)                      //Brute force approach
    //     {
    //         dupe[i][n-1-j]=matrix[j][i];
    //     }
    // }
    // for(i=0;i<n;i++)
    // {
    //     for(j=0;j<n;j++)
    //         matrix[i][j]=dupe[i][j];
    // }

    void rotate(vector<vector<int>>& matrix) {
        int row = matrix.size();
        for(int i=0;i<row; i++){
            for(int j=0; j<=i;j++){
                swap(matrix[i][j], matrix[j][i]);
            }
        }
        for(int i=0;i<row;i++){
            reverse(matrix[i].begin(), matrix[i].end());
        }
    
}