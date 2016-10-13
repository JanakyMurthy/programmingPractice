#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/* Author: Janaky Murthy*/

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    cin >> t;
    while(t--)
    {
        long n,m,s;
            cin >> n>>m>>s;
        long p = m % n;
        if(p==0) p = m;
        p = p + (s-1);
        if(p > n) p = p%n;
        cout << p << "\n";
    }
    return 0;
}
