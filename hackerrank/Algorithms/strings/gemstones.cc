#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/* Author: Janaky Murthy*/

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n;
    cin>>n;
    vector<string> s(n);
    for(int i=0;i<n;i++) cin>>s[i];
    vector<int> count(26);
    vector<bool> isFound(26);
    
    for(int i=0;i<n;i++)
    {
        for(int i=0;i<26;i++) isFound[i] = false;
        for(int j=0;j<s[i].length();j++)
        {
            if(!isFound[s[i][j]-'a'])
            {
                count[s[i][j]-'a']++;
                isFound[s[i][j]-'a'] = true;
            }
        }
            
    }
    
    int c=0;
    for(int i=0;i<26;i++) if(count[i]==n) c++;
    cout<<c<<"\n";
    return 0;
}
