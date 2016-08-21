#include<stdio.h>


/* Author: Janaky Murthy */

/* Problem Statement: Comput the number of trailing zeroes in n!
 * Input: 
 *  Line 1: T [T is the Number of test cases]
 *  each test case will be an integer n.
 * Output:
 *   For each test case output the number of trailing zeroes in n! followed by '\n'
 */
int main()
{
    /* Read the number of test cases */
    int t;
    scanf("%d",&t);
    
    /* Iterate for each test case */
    while(t--)
    {
        /* read n */
        int n;
        scanf ("%d",&n);
        
        /* Now factorial(n) = n * (n-1) * (n-2) * .... * 1
         * For each trailing zero we need a factor which is a
         * multiple of 10. i.e for each trailing zeroe we need a 5 and 2 in the factors.
         * In any given range 1,2,...,n we have more number which are multiples of 2 than
         * the numbers which are multiple of 5. So we just need to count the number of multiples of 5
         * in the range 1...n. But there is one more thing to be taken care of.
         * Constder the number 50. 50 = 5 * 5 * 2. So 50 has 2 5's in its factorization. So we have to count that too!
         * In general we have to count the numbers have factor 5,5*5,5*5*5,.... and so on
         */
         
         int numOfTrailingZeroes = 0;
         
         int fivePowi = 5;
         
         while(n / fivePowi)
         {
             numOfTrailingZeroes += n / fivePowi;
             fivePowi *= 5;
         }
         
         
         /* print the result */
         printf("%d\n",numOfTrailingZeroes);
    }
    
    /* Return 0 to indicate normal termination */
    return 0;
}
