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

/*Author: Janaky Murthy*/

using namespace std;


int main(){
    int n;
    cin >> n;
    for(int a0 = 0; a0 < n; a0++){
        string s;
        cin >> s;
        int c[26];
    for(int i=0; i<26; i++) c[i] = 0;
    int k = 0;
    for(int i = 0; i <s.length(); i++)
    {
        if(c[s[i] - 'a'] == 0) k++;
        c[s[i]-'a']++;
    }
    cout << k << "\n";
    
    }
    return 0;
}
