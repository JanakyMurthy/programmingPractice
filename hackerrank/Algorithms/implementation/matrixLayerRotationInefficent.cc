#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/* Author: Janaky Murthy*/
/* A Ineffecient approach for Matrix Layer Rotation*/

void rotateLayers(vector<vector<int>>& matrix , int m, int n)
{
     
        
        /* compute number of layers */
        int min = m < n ? m : n;
        int numOfLayers = min / 2;
        
        /* iterate for each layer */
        for(int layer = 0; layer < numOfLayers; layer++)
        {
            /* find the boundary of each layer */
            int startRow = layer;
            int startCol = layer;
            int endRow = m-1-layer;
            int endCol = n-1-layer;
            int i,j;

            /* save the values of four corners in temporary variables */
            int cornerul = matrix[startRow][startCol];
            int cornerur = matrix[startRow][endCol];
            int cornerll = matrix[endRow][startCol];
            int cornerlr = matrix[endRow][endCol];
            
            // shift down
            i = endRow-1; j = startCol;
            while(i > startRow)
            {
                matrix[i+1][j] = matrix[i][j];
                i--;
            }
            matrix[startRow+1][startCol] = cornerul;
            
            // shift right
            i = endRow; j = endCol-1;
            while(j > startCol)
            {
                matrix[i][j+1] = matrix[i][j];
                j--;
            }
            matrix[endRow][startCol+1] = cornerll;
            
            // shift up
            i = startRow+1; j=endCol;
            while(i < endRow)
            {
                matrix[i-1][j] = matrix[i][j];
                i++;
            }
            matrix[endRow-1][endCol] = cornerlr;
            
            // shift left
            i = startRow; j = startCol+1;
            while(j < endCol)
            {
                matrix[i][j-1] = matrix[i][j];
                j++;
            }
            matrix[startRow][endCol-1] = cornerur;
        }
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int m,n,r;
    
    /* m = num of rows
     * n = num of columns
     * r = num of rotations
     */
    cin >> m >> n >> r;
    
    /* read the m*n matrix */
    vector<vector<int>> matrix;
    for(int i=0; i<m; i++) matrix.push_back(vector<int> (n));
    for(int i=0; i<m; i++) 
        for(int j=0; j<n; j++)
            cin >> matrix[i][j];
     
    
    /* rotate r times */
    for(int k=0; k<r; k++)
    {
        rotateLayers(matrix,m,n);
    }
    
    /* print output */
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
           cout << matrix[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}
