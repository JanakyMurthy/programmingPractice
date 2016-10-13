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
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int count=0;
        for(int i=1;i<s.length();i++)
            if(s[i] == s[i-1]) count++;
        cout<<count<<"\n";
    }
    return 0;
}
