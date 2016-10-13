#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/* Author: Janaky Murthy*/

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,k;
    cin >> n >> k;
    
    long * a = new long int[n];
    for(int i=0; i<n; i++) cin >> a[i];
    
    if(k==1) cout << 1 << "\n";
    
    else
    {
        int * r = new int[k];
        for(int i=0; i<k; i++) r[i] = 0;
        for(int i=0; i<n; i++) r[a[i] % k]++;
    
        int size = 0;
        size+= r[0] >= 1 ? 1 : 0;
         for(int i=1; i<=k/2; i++)
         {
             if(i==k-i && r[i] >= 1) size++;
             else if(i != k-i)
             {
                 if(r[i] > r[k-i] ) size+= r[i];
                 else size += r[k-i];
             }
         }
        cout << size;
    }
    return 0;
}
