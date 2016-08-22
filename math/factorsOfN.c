#include<stdio.h>
#include<stdlib.h>
#include<math.h>

/* Author: Janaky Murthy */

/* Problem Statement: Find all factors of a number
 * Input:
 *  Line 1: T [num of test cases]
 *  Each test case is a number n 
 * Output:
 *   For each test case output all the factors of n seperated by space
 *   in a line
 */

/* Print all the factors of number n*/
void printFactors(int n);


int main()
{
    /* Read the number of test cases */
    int t;
    scanf("%d",&t);
    
    /* iterate for each test case */
    while(t--)
    {
        /* Read n */
        int n;
        scanf("%d",&n);
        
        /* print factors of n */
        printFactors(n);
    }
    
    /* Return 0 to indicate normal termination */
    return 0;
}

/* Compare function for qsort */
int compareFunc(const void *a, const void *b)
{
    int aval = * ((int *)a);
    int bval = * ((int *)b);
    return aval > bval;
}


/* print factors of n*/
void printFactors(int n)
{
    int * factors = malloc(n * sizeof(int));
    int  numOfFactors = 0;
    
    int sqrtN =sqrt(n);
    
    for(int i = 1; i <=sqrtN; i++)
    {
        if(i * i == n)
        {
            factors[numOfFactors++] = i;
        }
        else if( n % i == 0)
        {
            factors[numOfFactors++] = i;
            factors[numOfFactors++] = n/i;
        }
    }
    
    
    /* Sort the array */
    qsort(factors, numOfFactors, sizeof(int), compareFunc);
    
    /* Print the factors*/
    for(int i=0; i<numOfFactors; i++) 
    {
        if(i == numOfFactors-1) printf("%d\n", factors[i]);
        else printf("%d ",factors[i]);
    }
    
    /* free memory*/
    free(factors);
    
    /*return*/
    return;
}