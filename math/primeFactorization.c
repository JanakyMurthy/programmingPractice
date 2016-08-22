#include<stdio.h>
#include<math.h>
/* Author: Janaky Murthy*/

/* Problem Statement: Find Prime Factorization of Number n
 * Input:
 *  Line 1: T [num of test cases]
 *  Next T lines will contain a number n 
 * Output:
 *  For each test case print a single line a list of prime factors
 *  in exponent form.for eg if n = 12 output is 2^2 * 3^1
 * 
 */
 
 /* function to print prime factors of number n */
 void printPrimeFactors(long n);
 
int main()
{
    /* Read the number of test cases */
    int t;
    scanf("%d\n",&t);
    
    /* Iterate for each test case */
    while(t--)
    {
        /*  read n */
        long n;
        scanf("%ld",&n);
        
        /* Print the prime factors of n */
        printPrimeFactors(n);
    }
    
    /* Return 0 to indicate normal termination */
    return 0;
}

long findSmallestPrimeFactor(long n)
{
    long sqrtN = sqrt(n);
    for(int i =2; i<= sqrtN; i++)
        if(n % i == 0) return i;
    return n;    
}


void printPrimeFactors(long n)
{
    long * primeFactor = malloc(n * sizeof(long));
    long * primeFactorCount = malloc(n * sizeof(long));
    long psize = 0;
    
    /* calcuate prime factors */
    long smallestPrimeFactor = findSmallestPrimeFactor(n);
    primeFactor[psize] = smallestPrimeFactor;
    primeFactorCount[psize] = 1;
    n = n / smallestPrimeFactor;
    
    while(n != 1)
    {
        smallestPrimeFactor = findSmallestPrimeFactor(n);
        if(smallestPrimeFactor == primeFactor[psize])
        {
            primeFactor[psize] = smallestPrimeFactor;
            primeFactorCount[psize]++;
        }
        else
        {
            psize ++;
            primeFactor[psize] = smallestPrimeFactor;
            primeFactorCount[psize] = 1;
        }
        n = n / smallestPrimeFactor;
    }
    
    /* print prime factrs */
    for(long i=0; i<psize; i++)
    {
        printf("%ld^%ld*",primeFactor[i] , primeFactorCount[i]);
    }
    printf("%ld^%ld\n", primeFactor[psize], primeFactorCount[psize]);
    
    
    /* free memory*/
    free(primeFactor);
    free(primeFactorCount);
}