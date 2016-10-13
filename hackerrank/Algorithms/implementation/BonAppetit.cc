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
    vector<int> a(n);
    for(int i=0; i<n; i++) cin >> a[i];
    int s = 0;
    for(int i = 0; i<n; i++) if(i!=k) s+=a[i];
        s = s/2;
    int b;
    cin >> b;
    if(s == b) cout << "Bon Appetit";
    else cout << b-s;
    return 0;
}
