#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

/* Author: Janaky Murthy*/

using namespace std;


int main(){
    string s;
    cin >> s;
    int c = 0;
    for(int i=0; i<s.length(); i=i+3)
    {
        if(s[i] != 'S') c++;
        if(s[i+1] != 'O')c++;
        if(s[i+2] != 'S') c++;
    }
    cout << c;
    return 0;
   
}
