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
    if(s.length() == 0) cout << 0 << "\n";
    else
    {
        int w = 1;
        for(int i=0; i<s.length();i++)
       {
            if(s[i] >= 'A' && s[i] <= 'Z') w++;
        }
        cout << w << "\n";
    }
    return 0;
}
