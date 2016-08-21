#include<stdio.h>
#include <stdlib.h>

/* Author: Janaky Murthy*/

/*
Problem Statement: Rotate an array A of size N circularly left
                     by R positions

Input: 
Line 1: T (number of test cases)
Each Test Case  has 3 lines:
    Line 1: N (size of array)
    Line 2: a1 a2 ... aN (N space seperated elements of the array)
    Line 3: R (shift circularly left by R positions)
    
    
Output:
One line of output for each test case
Print rotated array as output. 

*/

int main()
{
    /* Read the number of Test Cases */
    int t;
    scanf("%d",&t);

    /* Iterate for each test case */
    while(t--)
    {
        /* Read the size of the array */
        int n;
        scanf("%d",&n);
        
        /* Dynamically create an array of size n*/
        int *a = malloc(n * sizeof(int));
        
        /*Read array elements */
        int i;
        for(i=0; i<n; i++) scanf("%d",&a[i]);
        
        /*Read the number of shifts*/
        int r;
        scanf("%d",&r);
        r = r % n;
        
        /* Create a new array to store the answer*/
        int *rotatedArray = malloc(n * sizeof(int));
        
        /* Traverse each element of array a and place it in
           appropiate position in rotatedArray*/
         for(i=0; i<n; i++)
         {
             int rotArrayPos = i - r; // Move left by r positions
             if(rotArrayPos < 0) rotArrayPos = rotArrayPos + n;
             rotatedArray[rotArrayPos] = a[i];
         }
         
         
         /* Print the rotated array*/
         for(i=0; i<n; i++) printf("%d ", rotatedArray[i]);
         
         printf("\n");
         
         
         
         /* free the rotatedArray*/
         free(rotatedArray);
    }
    
    /* Return 0 to indicate normal termination */
    return 0;
}
