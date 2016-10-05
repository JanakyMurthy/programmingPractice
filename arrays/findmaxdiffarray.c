#include <stdio.h>
#include <stdlib.h>
/* Author: janaky murthy*/
/* In a given array A find the maximum value of |Ai – i| – |Aj – j| where i is not equal to j.*/
int main(){
    
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int *a = malloc(n * sizeof(int));
        int i,j;
        for (i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
            a[i] = a[i] - (i+1);
        }
        
        int max = 0;
        for( i=0; i<n-1; i++)
        {
            for( j =i+1; j<n; j++)
            {
                int diff = a[i] - a[j];
                if(diff < 0) diff = -diff;
                if(diff > max) max = diff;
            }
        }
        printf("%d\n",max);
        free(a);
    }
	return 0;
}