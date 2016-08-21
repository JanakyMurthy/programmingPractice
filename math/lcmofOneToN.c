#include <stdio.h>


/* Author: Janaky Murthy */

/* Problem Statement: Find smallest number divsible by 1,2,...X
 * Input: 
 *   Line1: T [num of test cases]
 *   each test case is an integer X
 * Output:
 *    For each test case output a line smallest number divsible by 1,2,...X
 */
 
 
 
 /* returns the gcd of a,b ; We will be using
  * this to find lcm
  */
 long euclideanGCD(long a, long b);
 
 /* return lcm of a and b */
 long lcm(long a, long b);
 
 
 /* return lcm of 1...x */
 long findlcm(long x);
 
int main()
{
    /* Read the number of test cases*/
    int t;
    scanf("%d",&t);
    
    /*Iterate for each test case */
    while(t--)
    {
        /* Read x */
        long x;
        scanf("%ld",&x);
        
        /* find smallest number divisible by 1...x*/
        long smallest = findlcm(x);
        
        /* print gcd*/
        printf("%ld\n",smallest);
    }
    
    /* Return 0 to indicate normal termination */
    return 0;
}

/* finds lcm of 1,2,..,x */
long findlcm(long x)
{
    if(x == 1) return 1;
    
    long l = 1;
    long i = 2;
    while(i <= x)
    {
        l = lcm(l,i);
        i++;
    }
    return l;
}


/* finds lcm of a and b'
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
