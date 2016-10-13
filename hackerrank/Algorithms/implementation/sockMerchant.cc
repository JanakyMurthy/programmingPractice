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

using namespace std;


int main(){
    int n;
    cin >> n;
    vector<int> c(101);
    for(int c_i = 0;c_i < n;c_i++){
        int color;
        cin >> color;
        c[color]++;
    }
    int count = 0;
    for(int i=0; i<101; i++)
        count += (c[i] / 2);
    cout << count;
    return 0;
}
