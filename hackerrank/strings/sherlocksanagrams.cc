#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

/* Author: Janaky Murthy*/

long long numberOfAnagramaticPairs(string s)
{
    std::map< std::vector<int> , long long int> myMap;
    int l = s.length();
    for(int i=0; i<l; i++)
    {
        
        std::vector<int> count(26);
        for(int j=i; j<l; j++)
        {
            count[s[j]-'a']++;
            if(myMap.find(count) == myMap.end()) myMap[count] = 1;
            else myMap[count] = myMap[count] + 1;
        }
    }
    
    long long numOfPairs = 0;
     
    // iterate
    std::map<std::vector<int> , long long int>::iterator it;
    for(it = myMap.begin(); it!= myMap.end(); it++)
    {
        long long c = it->second;
        numOfPairs += (c * (c-1))/2;
    }
    
    return numOfPairs;
}


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        cout << numberOfAnagramaticPairs(s) << "\n";
    }
    return 0;
}

