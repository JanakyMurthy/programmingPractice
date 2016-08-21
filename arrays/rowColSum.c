#include<stdio.h>
/* Include other headers as needed */

/* Author: Janaky Murthy */

/*Problem Statement: Find row or column sum
    Input :
    Line 1: T [Number of test cases]
    Each test case has 2 lines:
        Line 1: N W
        Line 2: X L [ X is row or col number
                      L is a letter 
                      L= 'R' calculate row sum
                      L= 'C' calculate col sum]
*/
int main()
{
    /* Read the number of test cases*/
    int t;
    scanf("%d",&t);
    
    /* Iterate for each test case*/
    while(t--)
    {
        /* Read N and W */
        long n,w;
        scanf("%ld %ld",&n,&w);
        
        /* Read X and L */
        int x;
        char l;
        scanf("%d %c",&x,&l);
        
        /* Now think*/
        
        /* Total Number of rows = integer( n / w)*/
        
        /* First number of ith row is (Assuming row numbering
           starts from 1) is: 3i-2
         * Total Number of columns = N if N < W
                                    = W otherwise
         * Column number of last element  i.e N is: N % W*/
         
         /*
         
         * Let's Calculate first and last element of ith row
           firstRowI = 3I - 2
           lastRowI = (firstRowI + w - 1) or N whichever is greater
           CommonDifference = 1
           numberOfElementsInRowI = lastRowI - firstRowI + 1
           Every row is a arithmetic progression. So sum of ith row
           is 
           rowSumI = (numberOfElementsInRowI/2)(firstRowI + lastRowI)
         */
         if(l == 'R') // calculate row sum
         {
             long firstRowI = w * x - w + 1;
             long lastRowI = (firstRowI+w-1) < n ? (firstRowI+w-1) : n;
             int numberOfElementsInRowI = lastRowI - firstRowI + 1;
             long rowSumI  = (numberOfElementsInRowI)*(firstRowI + lastRowI)/2;
             printf("%ld\n",rowSumI);
         }
         
         /*
          * Let's Calculate the first and last element of ith column
          * firstColI = I
          * totalNumOfRows = n / w
          * CommonDifference = w
          * LastColI = firstColI + (totalNumOfRows-1) commonDifference
          * if LastColI > N
          *    then LastColI -= commonDifference
          *         numberOfElementsInColI = totalNumOfRows -1
          * else
          *    numberOfElementsInColI = totalNumOfRows
          * colSumI = (numberOfElementsInColI/2)(firstColI + lastColI)
          * 
         */
         if(l == 'C') // calculate col sum
         {
             long firstColI = x;
             int totalNumOfRows = n / w;
             int cd = w;
             long lastColI = firstColI + (totalNumOfRows-1) * cd;
             int numberOfElementsInColI;
             if(lastColI > n) 
             {
                 lastColI -= cd;
                 numberOfElementsInColI = totalNumOfRows - 1;
             }
             else numberOfElementsInColI = totalNumOfRows;
             long colSumI = (numberOfElementsInColI)*(firstColI + lastColI)/2;
             printf("%ld\n",colSumI);
         }
        
    }
    
    /* Return 0 to indicate normal termination */
    return 0;
}
