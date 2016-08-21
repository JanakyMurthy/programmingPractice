#include<stdio.h>

/* Author: Janaky Murthy */

/* Problem Statement: Find GCD(A,B)
 * Input: 
 *   Line1: T [num of test cases]
 *   each test case is a pair of space seperated integers A and B
 * Output:
 *    For each test case output a line gcd(A,B)
 */
 
 /* returns the gcd of a,b*/
 long euclideanGCD(long a, long b);

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
        long int g = euclideanGCD(a,b);
        
        /* print gcd*/
        printf("%ld\n",g);
    }
    
    /* Return 0 to indicate normal termination */
    return 0;
}


/* uses euclid's algorithm to find gcd of two numbers
 * We want to find the gcd of a and b
 * let a >= b
 * then a can be written as :
 *      a = bq + r
 * Let g = gcd(a,b) . So g divides a and b
 * => g divides (a - bq)
 * => g divdes r
 * => g is a common factor of b and r
 * (But is it the greatest common factor of b and r ?)
 * We do not know if g is the greatest common divisor of b and r.
 * So g <= gcf(b,r) --- (1)
 * Now a >= r
 * So gcf(a,b) >= gcf(r,b) (Why??) --- (2)
 * By 1 and 2 gcf (a,b) = gcf(b,r)
 * but what is the base case ?
 * gcf(a,b) = a when b = 0 (BASE CASE)
 
 *Ha Ha Ha :) What is the time complexity of this algorithm ??
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
