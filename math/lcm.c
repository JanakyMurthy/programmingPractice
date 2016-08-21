#include <stdio.h>


/* Author: Janaky Murthy */

/* Problem Statement: Find LCM(A,B)
 * Input: 
 *   Line1: T [num of test cases]
 *   each test case is a pair of space seperated integers A and B
 * Output:
 *    For each test case output a line LCM(A,B)
 */
 
 
 
 /* returns the gcd of a,b ; We will be using
  * this to find lcm
  */
 long euclideanGCD(long a, long b);
 
 /* return lcm of a and b */
 long lcm(long a, long b);
 
 
int main()
{
    /* Read the number of test cases*/
    int t;
    scanf("%d",&t);
    
    /*Iterate for each test case */
    while(t--)
    {
        /* Read a and b */
        long a,b;
        scanf("%ld %ld",&a,&b);
        
        /* find gcd */
        long int l = lcm(a,b);
        
        /* print gcd*/
        printf("%ld\n",l);
    }
    
    /* Return 0 to indicate normal termination */
    return 0;
}


/* finds lcm of a and b'
 * Suppose we want to find lcm of 12 and 16
 * 12 = 2 X 2 X 3
 * 16 = 2 X 2 X 2 X 2
 * GCF (12, 16) = product of all the common prime factors  = 2 X 2 = G
 * LCM (12,16) = 2 X 2 X 3 X 2 X 2 = (12 X 16) / GCF(12,16)
 */

long lcm(long a, long b)
{
    if(a == 0 || b == 0) return 0;
    
    return (a * b) / euclideanGCD(a,b);
}

/* uses euclid's algorithm to find gcd of two numbers
 */

long int euclideanGCD(long int a,long int b)
{
   if ( a < b)
   {
       long int t = a;
       a = b;
       b = t;
   }
   
   /* base case */
   if(b == 0) return a;
   
   /* recursive case */
   int r = a % b;
   return euclideanGCD(b,r);
   
}
