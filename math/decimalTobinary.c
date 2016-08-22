#include<stdio.h>
#include <string.h>
/* max length of binary string*/
// #define MAX 200;

/* Author: Janaky Murthy*/

/* Problem Statement: Convert decimal to binary
 * Input: 
 * Line 1: T [Num of test cases]
 * each test case is a decimal number n
 *  0 <= n <= 10^9
 * Output:
 *  For each test case output the decimal equivalent
 * the binary equivalent must not contain leading zeroes
 */
 
 
 /* function to find binary of a decimal */
 char * converToBinary (int decimal);
 
 
 /* helper function to reverse the string*/
void reverseStr(char *s);

int main()
{
    /* Read the number of test cases */
    int t;
    scanf("%d",&t);
    
    /* iterate for each test case */
    while(t--)
    {
        /* read the decimal number */
        int decimal;
        scanf("%d" , &decimal);
    
       
        /* Convert to binary and print*/ 
         printf("%s\n" , convertTobinary(decimal));
    }
    
    /* Return 0 to indicate normal termination */
    return 0;
}

/* reverse a string s*/
void reverseStr (char * s)
{
    int l =strlen(s);
    int st = 0;
    int end = l-1;
    while(st < end)
    {
        char c = s[st];
        s[st] = s[end];
        s[end] = c;
        st++; end--;
    }
    
}

char * convertTobinary(int decimal)
{
    if(decimal == 0) return "0";
    char revBin[200];
    char binary[200];
    
    int binSize = 0;
    
    while(decimal!=0)
    {
        int rem = decimal % 2;
        decimal = decimal / 2;
        revBin[binSize++] = rem + '0';
    }
    revBin[binSize] = '\0';
    reverseStr(revBin);
    return revBin;
}
