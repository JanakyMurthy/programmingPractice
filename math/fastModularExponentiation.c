#include<stdio.h>

/* Author: Janaky Murthy*/

/* Problem Statement:  Modular Exponentiation
 *                     Given 3 positive numbers X,n,M
 *                     calculate (X^N) % M
 * Input:
 *  Line 1: T [num of test cases]
 *  each test case is a line of space seperated integers X n M
 * Output:
 *      For each test case output X^N % M in a single line
 */
 
 /* returns (x^n) % m */
 long fastModularExponentiation(long x,long n, long m);

int main()
{
    /* Read the number of test case */
    int t;
    scanf("%d",&t);
    
    /* iterate for each test case */
    while(t--)
    {
        /* read x n m */
        long x , n, m;
        scanf("%ld %ld %ld",&x,&n,&m);
        
        /* find (x^n) % m */
        long mod = fastModularExponentiation(x,n,m);
        
        /* Print the result */
        printf("%ld\n",mod);
    }
    
    /* Return 0 to indicate normal termination */
    return 0;
}


long fastModularExponentiation(long base , long exp, long mod )
{
    long result = 1;
    
    /* basePow2iMod holds the value of (base ^ (2i) % mod*/
    long basePow2iMod = base;
    
    while(exp > 0)
    {   
        
        /* extract the least significant bit*/
        int lsb = exp % 2;
        
        /* if lsb is 1 then multiply basePow2iMod to the result */
        if(lsb == 1) result = (result * basePow2iMod) % mod;
        
        /* update the exponent*/
        exp = exp / 2;
        
        /* update basePow2iMod */
        basePow2iMod = (basePow2iMod * basePow2iMod) % mod;  
    }
    return result;
}