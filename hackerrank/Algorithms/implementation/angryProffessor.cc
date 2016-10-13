#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/* Author: Janaky Murthy*/

int main(){
    int t;
    cin >> t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int count =0;
        int a;
        while(n--)
        {
            cin>>a;
            if(a<=0) count++;
        }
        if(count>=k) cout<<"NO\n";
        else cout<<"YES\n";
    }
   
    
    return 0;
}
