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
    int x1;
    int v1;
    int x2;
    int v2;
    cin >> x1 >> v1 >> x2 >> v2;
    if(v1 == v2 && x1 == x2) cout<<"YES\n";
    else if(v1 == v2) cout<<"NO\n";
    else if(v1!=v2)
    {
        if((x2-x1) % (v1-v2) == 0) 
        {
            int n = (x2-x1) / (v1-v2) + 1;
            if(n > 1) cout << "YES\n";
            else cout << "NO\n";
        }
        else cout << "NO\n";
    }
    return 0;
}
