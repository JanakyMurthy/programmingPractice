#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

/* Author: Janaky Murthy*/

using namespace std;


bool isreduced(string s)
{
    if(s.length() == 0 || s.length() == 1) return true;
    for(int i=0; i<s.length()-1; i++)
    {
        if(s[i] == s[i+1]) return false;
    }
    return true;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    string s;
    cin >> s;
    while(!isreduced(s))
    {
        string w = "";
        bool pair = false;
        int i;
        for(i=0; i<s.length()-1; i++)
        {
            
            if(s[i] == s[i+1])
            {
                i++;
                pair = true;
            }
            else
            {
                w+=s[i];
                pair = false;
            }
        }
        if(i == s.length()-1) w+=s[s.length()-1];            
       s = w;
    }
    if(s.length() == 0) cout << "Empty String";
    else cout << s;
        
    return 0;
}
