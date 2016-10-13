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
    int n;
    int k;
    int q;
    cin >> n >> k >> q;
    vector<int> a(n);
    for(int a_i = 0;a_i < n;a_i++){
       cin >> a[a_i];
    }
    vector<int> rot (n);
    for(int i=0; i<n; i++)
    {
        int newIndex = i + k;
        newIndex = newIndex % n;
        rot[newIndex] = a[i];
    }
    for(int a0 = 0; a0 < q; a0++){
        int m;
        cin >> m;
        cout << rot[m] << "\n";
    }
    return 0;
}
