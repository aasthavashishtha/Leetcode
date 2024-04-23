void rotate(int** matrix, int matrixSize, int* matrixColSize) {
    int i=0,j=0;
    int n = *matrixColSize;
    int dupe[n][n];
    for(i=0;i<n;i++)
    {
        for(j=n-1;j>=0;j--)
        {
            dupe[i][n-1-j]=matrix[j][i];
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            matrix[i][j]=dupe[i][j];
    }
}