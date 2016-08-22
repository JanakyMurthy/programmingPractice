#include<stdio.h>
/*  Author: Janaky Murthy */

/* problem Statement: find the kth lucky number
 *  A number is lucky if it has only odd digits.
 *  Input:
 *   Line 1: t [num of test cases]
 *   each test case is a number k
 *  Output:
 *    For each test case output the kth lucky number on a single line
 */
 
    

int main()
{
    /* read the number of test cases */
    int t;
    scanf("%d",&t);
    
    /* iterate for each test case */
    while(t--)
    {
        /* read k */
        int k;
        scanf("%d",&k);
        
        /* luckyCount keeps track of the number of lucky numbers seen so far*/
        int luckyCount = 0;
        
        /* Current number is 1*/
        int curNum = 1;
        
        while(luckyCount != k)
        {
            if(isLucky(curNum)) luckyCount++;
            curNum++;
        }
        
        /* print the kth lucky number */
        printf("%d\n",curNum-1);
        
    }
    
    /* Return 0 to indicate normal termination */
    return 0;
}




 /* is N a lucky num ?? */
 int isLucky(int n)
 {
     int lucky;
     
     if(n==0)
     {
         lucky = 0; // the number 0 is not lucky
     }
     else
     {
         lucky = 1; // assume that the number is lucky
         while(n)
         {
             int digit = n % 10;
             
             // is the digit even?
             if(digit % 2 == 0)
             {
                 lucky = 0; // number is not lucky!!
                 break;
             }
             
             n = n/10;
         }
     }
     
     return lucky;
 }