#include<stdio.h>


/* Author: Janaky Murthy*/

/* Problem Statement: Convert binary to decimal
 * Input: 
 * Line 1: T [Num of test cases]
 * each test case is a string of 0's and 1's
 * 1 <= size of string <= 30
 * Output:
 *  For each test case output the decimal equivalent
 */

int main()
{
    /* Read the number of test cases */
    int t;
    scanf("%d",&t);
    
    /* iterate for each test case */
    while(t--)
    {
        /* read the binary number */
        char binary[31];
        scanf("%s",binary);
        
        /*initialize twoPowi */
        int twoPowi = 1;
        
        /* initialize decimal */
        int decimal = 0;
        
        /* Calculate the string length of binary string*/
        int binLen = strlen(binary);
        
        /* Iterate through each bit of binary string */
        int i;
        for( i=binLen-1; i>=0; i--)
        {
            decimal += (binary[i] - '0') * twoPowi;
            twoPowi *= 2;
        }
        
        /* print the decimal */
        printf("%d\n",decimal);
    }
    
    /* Return 0 to indicate normal termination */
    return 0;
}
