#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
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
        vector<int> r;
        for(int i=1;i<s.length();i++)
         r.push_back(abs(s[i]-s[i-1]));
        bool ispal = true;
        for(int i=0;i<r.size()/2;i++)
          if(r[i]!=r[r.size()-i-1])
          {
            ispal=false;break;
          }
       if(ispal)cout<<"Funny\n";
        else cout<<"Not Funny\n";
    }
    return 0;
}
