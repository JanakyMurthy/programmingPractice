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
    int k;
    cin >> n >> k;
    vector<int> c(n);
    for(int c_i = 0;c_i < n;c_i++){
       cin >> c[c_i];
    }
    int e = 100;
    int cur = k%n;
    if(c[cur]) e -=3;
    else e-=1;
    while(cur!=0)
    {
        //cout << cur << " " << e << "\n";
        cur = (cur + k)%n;
        if(c[cur])  e-=3;
        else e-=1;
    }
    cout << e;
    return 0;
}
