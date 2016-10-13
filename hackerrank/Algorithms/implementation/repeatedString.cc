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
    long n;
    cin >> n;
    long sa = 0;
    for(int i=0; i<s.length(); i++) if(s[i] == 'a') sa++;
    long ca = (n/s.length())*sa;
    long rem = n%s.length();
    for(int i=0;i<rem;i++) if(s[i] == 'a') ca++;
    cout << ca;
    return 0;
}
